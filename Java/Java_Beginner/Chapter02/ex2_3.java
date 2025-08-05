// ex2_3.java
// 소스코드 수정하기 (도움말 출력)

package Java_Beginner.Chapter02;

import java.util.Scanner;

public class ex2_3 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        int result = 0;

        try(Scanner s = new Scanner(System.in)) {
            System.out.print("첫 번째 계산할 값 입력 : ");
            a = s.nextInt();
            System.out.print("두 번째 계산할 값 입력 : ");
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
