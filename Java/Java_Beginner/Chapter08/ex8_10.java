// ex8_10.java
// 2차원 배열의 동적 할당

package Java.Java_Beginner.Chapter08;

import java.util.Scanner;

public class ex8_10 {
    public static void main(String[] args) {
        int row = 0, col = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.print("행 개수를 입력 : ");
            row = s.nextInt(); 
            System.out.print("열 개수를 입력 : ");
            col = s.nextInt(); 

            int[][] aa = new int[row][col];

            int i = 0, k = 0;
            int val = 1;

            for (i=0; i<row; i++) {
                for (k=0; k<col; k++) {
                    aa[i][k] = val;
                    val++;
                }
            }

            System.out.printf("aa[0][0] ~ aa[%d][%d] 까지 출력 \n", row, col); 

            for (i=0; i<row; i++) {
                for (k=0; k<col; k++) {
                    System.out.printf("%3d", aa[i][k]); 
                }
                System.out.printf("\n"); 
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}