// ItemRepository.java

package com.shoppingmall.repository;

import com.shoppingmall.entity.Item;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface ItemRepository extends JpaRepository<Item, Long> {
    List<Item> findByItemNum(String itemNm);
}
