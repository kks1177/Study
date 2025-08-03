// OrderRepository.java
// DAO

package com.shoppingmall.repository;

import com.shoppingmall.entity.Order;
import org.springframework.data.jpa.repository.JpaRepository;

// DAO 역할
public interface OrderRepository extends JpaRepository<Order, Long> {
}
