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
			System.err.println("\n\n !!!예외 발생: " + e.getMessage());
			e.printStackTrace();
		}
	}

	@GetMapping(value = "/")
	public String HelloWorld() {
		return "Hello World";
	}
}
