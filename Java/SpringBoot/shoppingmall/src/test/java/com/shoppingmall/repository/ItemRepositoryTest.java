// ItemRepositoryTest.java

package com.shoppingmall.repository;

import com.shoppingmall.constant.ItemSellStatus;
import com.shoppingmall.entity.Item;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.DisplayName;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.TestPropertySource;
import org.springframework.beans.factory.annotation.Autowired;
//import jakarta.persistence.PersistenceContext;
//import jakarta.persistence.EntityManager;
//import com.querydsl.jpa.impl.JPAQueryFactory;
//import com.querydsl.jpa.impl.JPAQuery;
//import com.shoppingmall.entity.QItem;

import java.time.LocalDateTime;
import java.util.List;

//import static org.junit.jupiter.api.Assertions.*;

@SpringBootTest
@TestPropertySource(locations="classpath:application-test.properties")
class ItemRepositoryTest {
    @Autowired
    ItemRepository itemRepository;

//    @PersistenceContext
//    EntityManager em;

    // p.81 [함께 해봐요 2-3] 상품 Repository 작성 및 테스트 하기
    /* hibernate_sequence라는 키 생성 전용 테이블로부터
     다음에 저장할 상품의 기본키(PK)를 가져와서 item 테이블의 기본키 값으로 설정 */
    @Test
    @DisplayName("상품 저장 테스트")
    public void createItemTest() {
        Item item = new Item();
        item.setItemNm("테스트 상품");
        item.setPrice(10000);
        item.setItemDetail("테스트 상품 상세 설명");
        item.setItemSellStatus(ItemSellStatus.SELL);
        item.setStockNumber(100);
        item.setRegTime(LocalDateTime.now());
        item.setUpdateTime(LocalDateTime.now());
        Item savedItem = itemRepository.save(item);
        System.out.println(savedItem.toString());
    }

    // p.86 [함께 해봐요 2-4] 쿼리 메소드를 이용한 상품 조회하기
    /* 테스트 코드 실행 시 DB에 상품 데이터가 없으므로
    데이터 생성을 위해 10개의 상품을 저장하는 메소드를 findByItemNmTest()에서 실행 */
    public void createItemList() {
        for (int i = 1; i <= 10; i++) {
            Item item = new Item();
            item.setItemNm("테스트 상품" + i);
            item.setPrice(10000 + i);
            item.setItemDetail("테스트 상품 상세 설명" + i);
            item.setItemSellStatus(ItemSellStatus.SELL);
            item.setStockNumber(100);
            item.setRegTime(LocalDateTime.now());
            item.setUpdateTime(LocalDateTime.now());
            Item savedItem = itemRepository.save(item);
        }
    }
    /* 상품명을 통해 상품을 검색 */
    @Test
    @DisplayName("상품명 조회 테스트")
    public void findByItemNmTest() {
        this.createItemList();

        // ItemRepository 인터페이스에 작성했던 findByItemNm 메소드 호출 (파라미터: 테스트 상품1)
        List<Item> itemList = itemRepository.findByItemNm("테스트 상품1");

        // 조회 결과 얻은 item 객체들 출력
        for (Item item : itemList) {
            System.out.println(item.toString());
        }
    }

    // p.90 [함께 해봐요 2-5] OR 조건 처리하기
    /* 상품명 or 상품상세설명 (조건)을 통해 상품을 검색 */
    @Test
    @DisplayName("상품명, 상품상세설명 or 테스트")
    public void findByItemNmOrItemDetailTest() {
        this.createItemList();  // 기존에 만들었던 테스트 상품을 만드는 메소드 실행, 조회할 대상 생성

        // 상품명이 "테스트 상품1" 또는 상품 상세 설명이 "테스트 상품 상세 설명5"이면 해당 상품을 itemList에 할당
        List<Item> itemList = itemRepository.findByItemNmOrItemDetail("테스트 상품1", "테스트 상품 상세 설명5");

        // 조회 결과 얻은 item 객체들 출력
        for (Item item : itemList) {
            System.out.println(item.toString());
        }
    }

    // p.91 [함께 해봐요 2-6] LessThan 조건 처리하기
    /* 가격(조건)을 통해 상품을 검색 */
    @Test
    @DisplayName("가격 LessThan 테스트")
    public void findByPriceLessThanTest() {
        this.createItemList();

        // 현재 DB에 저장된 가격은 10001~10010
        // 테스트 코드 실행시, 10개의 상품 로그 콘솔에 표시, 맨 마지막에 10005보다 작은 4개의 상품 출력
        List<Item> itemList = itemRepository.findByPriceLessThan(10005);

        // 조회 결과 얻은 item 객체들 출력
        for (Item item : itemList) {
            System.out.println(item.toString());
        }
    }

    // p.92 [함께 해봐요 2-7] OrderBy로 정렬 처리하기
    /* 오름차순:ASC or 내림차순:DESC 정렬하여 상품 검색 */
    @Test
    @DisplayName("가격 내림차순 조회 테스트")
    public void findByPriceLessThanOrderByPriceDesc() {
        this.createItemList();

        // 가격 내림차순 정렬된 상품 결과 출력
        List<Item> itemList = itemRepository.findByPriceLessThanOrderByPriceDesc(10005);

        // 조회 결과 얻은 item 객체들 출력
        for (Item item : itemList) {
            System.out.println(item.toString());
        }
    }

    // p.94 [함께 해봐요 2-8] @Query를 이용한 검색 처리하기
    /* @Query 어노테이션 안에 JPQL 쿼리문을 통해 상품 검색
    * 복잡한 쿼리인 경우 @Query 어노테이션을 사용해서 조회하면 됨 */
    @Test
    @DisplayName("@Query를 이용한 상품 조회 테스트")
    public void findByItemDetailTest() {
        this.createItemList();

        // 내림차순(DESC)로 정렬된 상품 데이터 10개가 가격이 높은 순부터 조회
        List<Item> itemList = itemRepository.findByItemDetail("테스트 상품 상세 설명");

        // 조회 결과 얻은 item 객체들 출력
        for (Item item : itemList) {
            System.out.println(item.toString());
        }
    }

    // p.96 [함께 해봐요 2-9] @Query-nativeQuery 속성 예제
    // 웬만하면 위에 [함께 해봐요 2-8] 방법 사용하기!!
    @Test
    @DisplayName("nativeQuery 속성을 이용한 상품 조회 테스트")
    public void findByItemDetailByNative() {
        this.createItemList();

        List<Item> itemList = itemRepository.findByItemDetailByNative("테스트 상품 상세 설명");

        // 조회 결과 얻은 item 객체들 출력
        for (Item item : itemList) {
            System.out.println(item.toString());
        }
    }

    // p.101 [함께 해봐요 2-10] JPAQueryFactory를 이용한 상품 조회 예제
    /* @Query 어노테이션 안에 JPQL 문법으로 문자열을 입력하는 방법은 컴파일 시점에 에러를 발견 x,
    * 이를 보완할 수 있는 방법이 QueryDSL
    * QueryDSL: SQL문을 문자열이 아닌 코드로 작성
    * 장점1. 문자열이 아닌 자바 소스코드로 작성하기 때문에 컴파일 시점에 오류 발견 가능
    * 장점2. 고정된 SQL문이 아닌 조건에 맞게 동적으로 쿼리 생성 가능
    * 장점3. 비슷한 쿼리 재사용 가능, 제약 조건 조립 및 가독성 향상 가능
    * 장점4. IDE의 도움을 받아 자동 완성 기능 이용 가능 --> 생산성 향상 */

    /* QueryDSL 설정
    1. QueryDSL 의존성 추가
    2. QueryDSL Q타입 생성 디렉토리 경로 지정
    3. .gitignore에 Q파일 포함 방지 경로 추가
    4. Q파일 생성 확인 (./gradlew clean build) */
    /*@Test
    @DisplayName("QueryDSL 조회 테스트1")
    public void queryDslTest() {
        this.createItemList();

        JPAQueryFactory queryFactory = new JPAQueryFactory(em);
        QItem qItem = QItem.item;
        JPAQuery<Item> query = queryFactory.selectFrom(qItem)
                .where(qItem.itemSellStatus.eq(ItemSellStatus.SELL))
                .where(qItem.itemDetail.like("%" + "테스트 상품 상세 설명" + "%"))
                .orderBy(qItem.price.desc());

        List<Item> itemList = query.fetch();

        // 조회 결과 얻은 item 객체들 출력
        for (Item item : itemList) {
            System.out.println(item.toString());
        }
    }
    */
}