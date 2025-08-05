// ex7_3.java
// while문의 무한 루프 만들기

package Java_Beginner.Chapter07;

import java.util.Scanner;

public class ex7_3 {
    public static void main(String[] args) {
        int a = 0, b = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            while (true) {
                System.out.printf("더할 첫번째 수 입력 : "); 
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
