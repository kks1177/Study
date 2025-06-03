// ex6_10.java
// for문을 사용하여 합계 구하기 4

package Java.Java_Beginner.Chapter06;

import java.util.Scanner;

public class ex6_10 {
    public static void main(String[] args) {
        int hap = 0, i = 0, num = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf(" 값 입력 : "); 
            num = s.nextInt(); 

            for (i=1; i<=num; i++) {
                hap += i;
            }

            System.out.printf(" 1에서 %d까지의 합 : %d \n", num, hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}