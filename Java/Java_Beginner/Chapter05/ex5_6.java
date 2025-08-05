// ex5_6.java
// 중괄호를 사용한 if~else문 사용 예 2

package Java_Beginner.Chapter05;

import java.util.Scanner;

public class ex5_6 {
    public static void main(String[] args) {
        int a = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("정수 입력 : "); 
            a = s.nextInt();

            if (a % 2 == 0) {
                System.out.printf("짝수 입력.."); 
            } else {
                System.out.printf("홀수 입력..");
            }
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
