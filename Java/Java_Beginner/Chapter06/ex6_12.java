// ex6_12.java
// for문을 사용한 구구단 프로그램

package Java_Beginner.Chapter06;

import java.util.Scanner;

public class ex6_12 {
    public static void main(String[] args) {
        int i = 0, dan = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf(" 몇 단 ?");
            dan = s.nextInt(); 

            for (i=1; i<=9; i++) {
                System.out.printf(" %d X %d = %d \n", dan, i, dan*i); 
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}