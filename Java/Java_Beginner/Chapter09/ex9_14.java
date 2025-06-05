// ex9_14.java
// 계산기 메소드 사용 예 

package Java.Java_Beginner.Chapter09;

import java.util.Scanner;

public class ex9_14 {
    static int calc(int v1, int v2, int op) {
        int result = 0;

        switch (op) {
            case 1:     result = v1 + v2;       break;
            case 2:     result = v1 - v2;       break;
            case 3:     result = v1 * v2;       break;
            case 4:     result = v1 / v2;       break;
            default:    result = 0;
        }
        return result;
    }
    public static void main(String[] args) {
        int res = 0;
        int oper = 0, a = 0, b = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : "); 
            oper = s.nextInt(); 

            System.out.printf("첫번째 숫자 입력 : "); 
            a = s.nextInt();
            System.out.printf("두번째 숫자 입력 : "); 
            b = s.nextInt();

            res = calc(a, b, oper);

            System.out.printf("계산 결과는 : %d\n", res); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}