// ItemRepository.java

package com.shoppingmall.repository;

import com.shoppingmall.entity.Item;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface ItemRepository extends JpaRepository<Item, Long> {
    // p.81 [함께 해봐요 2-3] 상품 Repository 작성 및 테스트 하기

    // p.86 [함께 해봐요 2-4] 쿼리 메소드를 이용한 상품 조회하기
    List<Item> findByItemNm(String itemNm);

    // p.90 [함께 해봐요 2-5] OR 조건 처리하기
    List<Item> findByItemNmOrItemDetail(String itemNm, String itemDetail);

    // p.91 [함께 해봐요 2-6] LessThan 조건 처리하기
    List<Item> findByPriceLessThan(Integer price);
}
