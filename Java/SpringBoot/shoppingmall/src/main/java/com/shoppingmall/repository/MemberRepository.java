// MemberRepository.java
// DAO

package com.shoppingmall.repository;

import com.shoppingmall.entity.Member;
import org.springframework.data.jpa.repository.JpaRepository;

// DAO 역할
public interface MemberRepository extends JpaRepository<Member, Long> {
    Member findByEmail(String email);
}
