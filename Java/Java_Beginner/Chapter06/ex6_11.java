// ex6_11.java
// for문을 사용하여 합계 구하기 5

package Java_Beginner.Chapter06;

import java.util.Scanner;

public class ex6_11 {
    public static void main(String[] args) {
        int hap = 0, i = 0, num1 = 0, num2 = 0, num3 = 0;
        
        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf(" 시작값 입력 : "); 
            num1= s.nextInt(); 
            System.out.printf(" 끝값 입력 : "); 
            num2= s.nextInt(); 
            System.out.printf(" 증가값 입력 : "); 
            num3= s.nextInt(); 

            for (i=num1; i<num2; i+=num3) {
                hap += i;
            }

            System.out.printf(" %d에서 %d까지 %d씩 증가한 값의 합 : %d \n", num1, num2, num3, hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
