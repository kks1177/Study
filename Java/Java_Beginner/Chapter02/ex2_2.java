// ex2_2.java
// 소스코드 수정하기 (키보드로 값 입력 받음)

package Java.Java_Beginner.Chapter02;

import java.util.Scanner;

public class ex2_2 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        int result = 0;

        try(Scanner s = new Scanner(System.in)) {
            a = s.nextInt();
            b = s.nextInt();
            
            try {
                result = a + b;
                System.out.println(a + "+" + b + "=" + result);
                
                result = a - b;
                System.out.println(a + "-" + b + "=" + result);
                
                result = a * b;
                System.out.println(a + "*" + b + "=" + result);

                result = a / b;
                System.out.println(a + "/" + b + "=" + result);
            } catch (Exception e) {
                System.out.println("에러 발생!");
            }
        }
    }
}
