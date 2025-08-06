// ItemRepository.java
// DAO

package com.shoppingmall.repository;

import com.shoppingmall.entity.Item;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;

import java.util.List;

// DAO 역할
// <Item:엔티티 타입 클래스, Long:기본키 타입>
public interface ItemRepository extends JpaRepository<Item, Long> {
    // p.81 [함께 해봐요 2-3] 상품 Repository 작성 및 테스트 하기

    // p.86 [함께 해봐요 2-4] 쿼리 메소드를 이용한 상품 조회하기
    // 검색할 때 사용할 상품명 변수를 매개변수로 넘겨줌
    List<Item> findByItemNm(String itemNm);

    // p.90 [함께 해봐요 2-5] OR 조건 처리하기
    // 상품명 || 상세 설명(OR 조건)을 이용해 조회하는 쿼리 메소드
    List<Item> findByItemNmOrItemDetail(String itemNm, String itemDetail);

    // p.91 [함께 해봐요 2-6] LessThan 조건 처리하기
    // 파라미터로 넘어온 price 변수보다 값이 작은 상품 데이터를 조회하는 쿼리 메소드
    List<Item> findByPriceLessThan(Integer price);

    // p.92 [함께 해봐요 2-7] OrderBy로 정렬 처리하기
    // ASC: 오름차순, DESC: 내림차순
    List<Item> findByPriceLessThanOrderByPriceDesc(Integer price);

    // p.94 [함께 해봐요 2-8] @Query를 이용한 검색 처리하기
    // @Query 어노테이션 안에 JPQL로 작성한 쿼리문 삽입, from 뒤에는 엔티티 클래스로 작성한 item 지정
    // item 으로부터 데이터를 select
    /* SQL: DB 테이블을 대상으로 쿼리 수행
    * JPQL: 엔티티 객체를 대상으로 쿼리 수행, 테이블이 아닌 객체를 대상으로 검색하는 객체지향 쿼리
    * JPQL은 SQL을 추상화해서 사용 --> 특정 DB에 종속되는 쿼리문에 의존 x
    * 즉, DB가 변경되어도 애플리케이션이 영향을 받지 않음 --> DB에 대해 독립적이라는 장점 */
    @Query("select i " +
            "from Item i " +
            "where i.itemDetail " +
                "like %:itemDetail% " +
                "order by i.price desc")
    // 파라미터에 @Param 어노테이션 이용하여 파라미터에 넘어온 값을 JPQL에 들어갈 변수로 지정
    List<Item> findByItemDetail(@Param("itemDetail") String itemDetail);

    // p.96 [함께 해봐요 2-9] @Query-nativeQuery 속성 예제
    // 웬만하면 위에 [함께 해봐요 2-8] 방법 사용하기!!
    /* @Query의 nativeQuery 속성을 사용하면 기존 쿼리를 그대로 활용 가능
    But, 특정 DB에 종속되는 쿼리문을 사용 --> DB에 대해 독립적이라는 장점 x
    통계용 쿼리처럼 복잡한 쿼리를 그대로 사용해야하는 경우 활용 */
    @Query(value="SELECT * FROM item i " +
                "WHERE i.item_detail LIKE CONCAT('%', :itemDetail, '%') " +
                "ORDER BY i.price DESC",
            nativeQuery = true)
    List<Item> findByItemDetailByNative(@Param("itemDetail") String itemDetail);
}
