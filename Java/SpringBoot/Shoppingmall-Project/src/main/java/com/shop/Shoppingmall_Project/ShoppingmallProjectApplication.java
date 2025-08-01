// ShoppingmallProjectApplication.java

package com.shop.Shoppingmall_Project;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class ShoppingmallProjectApplication {

	public static void main(String[] args) {
		try {
			SpringApplication.run(ShoppingmallProjectApplication.class, args);
		} catch (Exception e) {
		    System.err.println("\n\n !!!예외 발생: " + e.getMessage());
		    e.printStackTrace();
		}
	}

}
