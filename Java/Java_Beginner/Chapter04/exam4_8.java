// exam4_8.java
// 입력된 두 실수의 산술 연산

package Java_Beginner.Chapter04;

import java.util.Scanner;

public class exam4_8 {
    public static void main(String[] args) {
        float a = 0.0f, b = 0.0f;
        float result = 0.0f;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("첫번째 계산할 값 입력 ==> ");            
            a = s.nextInt();
            System.out.printf("두번째 계산할 값 입력 ==> ");            
            b = s.nextInt();

            result = a + b;
            System.out.printf(" %5.2f + %5.2f = %5.2f \n", a, b, result);
            result = a - b;
            System.out.printf(" %5.2f - %5.2f = %5.2f \n", a, b, result);
            result = a * b;
            System.out.printf(" %5.2f * %5.2f = %5.2f \n", a, b, result);
            result = a / b;
            System.out.printf(" %5.2f / %5.2f = %5.2f \n", a, b, result);
            result = (int)a % (int)b;
            System.out.printf(" %d %% %d = %d \n", (int)a, (int)b, (int)result);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }              
    }
}
