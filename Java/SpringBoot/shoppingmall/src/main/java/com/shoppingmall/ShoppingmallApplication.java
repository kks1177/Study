// ShoppingmallApplication.java

package com.shoppingmall;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class ShoppingmallApplication {

	public static void main(String[] args) {
		try {
			SpringApplication.run(ShoppingmallApplication.class, args);
		} catch (Exception e) {
			System.err.println("\n\n !!!예외 발생: " + e.getMessage());
			e.printStackTrace();
		}
	}

}
