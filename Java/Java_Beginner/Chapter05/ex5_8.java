// ex5_8.java
// 중첩 if문 사용 예 2

package Java_Beginner.Chapter05;

import java.util.Scanner;

public class ex5_8 {
    public static void main(String[] args) {
        int a = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("점수 입력 : "); 
            a = s.nextInt(); 

            if (a >= 90) 
                System.out.printf("A"); 
            else
                if (a >= 80)
                    System.out.printf("B");
                else
                    if (a >= 70)
                        System.out.printf("C"); 
                    else
                        if (a >= 60)
                            System.out.printf("D");
                        else
                            System.out.printf("F"); 

            System.out.printf(" 학점입니다. \n"); 
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}