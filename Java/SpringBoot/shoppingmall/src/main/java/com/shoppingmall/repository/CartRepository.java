// CartRepository.java
// DAO

package com.shoppingmall.repository;

import com.shoppingmall.entity.Cart;
import org.springframework.data.jpa.repository.JpaRepository;

// DAO 역할
public interface CartRepository extends JpaRepository<Cart, Long> {
    // p.193 [함께 해봐요 5-2] 장바구니 엔티티 조회 테스트하기 (즉시 로딩)
}
