// exam7_17.java
// 원하는 배수의 합계를 구하는 계산기

package Java_Beginner.Chapter07;

import java.util.Scanner;

public class exam7_17 {
    public static void main(String[] args) {
        int start = 0, end = 0;
        int basu = 0, i = 0;
        int hap = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("합계의 시작값 ==> "); 
            start = s.nextInt(); 
            System.out.printf("합계의 끝값 ==> "); 
            end = s.nextInt();             
            System.out.printf("배수 ==> "); 
            basu = s.nextInt(); 

            i = start; 
            while (i <= end) {
                if (i % basu == 0)
                    hap += i;
                i++;
            }

            System.out.printf("%d부터 %d까지의 %d 배수의 합계 ==> %d \n", start, end, basu, hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
