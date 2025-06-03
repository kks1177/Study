// ex6_18.java
// 다양한 for문의 형태 3

package Java.Java_Beginner.Chapter06;

import java.util.Scanner;

public class ex6_18 {
    public static void main(String[] args) {
        int a = 0, b = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            for(;;) {
                System.out.printf("더할 첫 수 입력 : "); 
                a = s.nextInt(); 
                System.out.printf("더할 두번째 수 입력 : "); 
                b = s.nextInt(); 

                System.out.printf("%d + %d = %d \n", a, b, a+b); 
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}