// ex8_2.java
// 배열의 값을 대입하여 출력

package Java_Beginner.Chapter08;

import java.util.Scanner;

public class ex8_2 {
    public static void main(String[] args) {
        int aa[] = new int[4];
        int hap = 0;
        
        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("1번째 숫자 입력 : "); 
            aa[0] = s.nextInt(); 
            System.out.printf("2번째 숫자 입력 : "); 
            aa[1] = s.nextInt(); 
            System.out.printf("3번째 숫자 입력 : "); 
            aa[2] = s.nextInt(); 
            System.out.printf("4번째 숫자 입력 : "); 
            aa[3] = s.nextInt(); 

            hap = aa[0] + aa[1] + aa[2] + aa[3];

            System.out.printf(" 합계 : %d \n", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}