// ItemRepository.java
// DAO

package com.shoppingmall.repository;

import com.shoppingmall.entity.Item;
import org.springframework.data.jpa.repository.JpaRepository;

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
}
