// ex7_8.java
// break문 사용 예 2

package Java_Beginner.Chapter07;

import java.util.Scanner;

public class ex7_8 {
    public static void main(String[] args) {
        int a = 0, b = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            while(true) {
                System.out.printf("더할 첫번째 수 입력 : "); 
                a = s.nextInt(); 
                System.out.printf("더할 두번째 수 입력 : "); 
                b = s.nextInt(); 

                if (a == 0)
                    break;

                System.out.printf("%d + %d = %d \n", a, b, a+b); 
            }
            System.out.printf("0을 입력해서 반복문을 탈출했습니다. \n"); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}