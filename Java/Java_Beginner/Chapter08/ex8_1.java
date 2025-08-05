// ex8_1.java
// 여러 개의 변수 값을 선언하여 출력 

package Java_Beginner.Chapter08;

import java.util.Scanner;

public class ex8_1 {
    public static void main(String[] args) {
        int a = 0, b = 0, c = 0, d = 0;
        int hap = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("1번째 숫자 입력 : "); 
            a = s.nextInt(); 
            System.out.printf("2번째 숫자 입력 : "); 
            b = s.nextInt(); 
            System.out.printf("3번째 숫자 입력 : "); 
            c = s.nextInt(); 
            System.out.printf("4번째 숫자 입력 : "); 
            d = s.nextInt(); 

            hap = a + b + c + d;

            System.out.printf(" 합계 ==> %d \n", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}