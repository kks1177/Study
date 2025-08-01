// ShoppingmallDemoApplication.java

package com.example.Shoppingmall_Demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@SpringBootApplication
public class ShoppingmallDemoApplication {

	public static void main(String[] args) {
		try {
			SpringApplication.run(ShoppingmallDemoApplication.class, args);
		} catch (Exception e) {
			System.out.println("에러 발생!!! \n");
			e.printStackTrace();	// 예외 직접 출력
		}
	}

	@GetMapping(value = "/")
	public String HelloWorld() {
		return "Hello World";
	}
}
