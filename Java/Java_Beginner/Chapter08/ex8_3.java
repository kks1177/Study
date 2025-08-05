// ex8_3.java
// for문으로 배열의 첨자 활용 예

package Java_Beginner.Chapter08;

import java.util.Scanner;

public class ex8_3 {
    public static void main(String[] args) {
        int aa[] = new int[4];
        int hap = 0, i = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            for (i=0; i<=3; i++) {
                System.out.printf("%d번째 숫자 입력 : ", i+1); 
                aa[i] = s.nextInt(); 
            }
            hap = aa[0] + aa[1] + aa[2] + aa[3];

            System.out.printf(" 합계 : %d \n", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}