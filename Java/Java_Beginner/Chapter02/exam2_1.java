// exam2_1.java
// 숫자 4개를 더하는 프로그램

package Java_Beginner.Chapter02;

import java.util.Scanner;

public class exam2_1 {
    public static void main(String[] args) {
        int a = 0, b = 0, c = 0, d = 0;
        int result = 0;

        try(Scanner s = new Scanner(System.in)) {
            System.out.print("첫번째 계산할 값 입력 : ");
            a = s.nextInt();
            System.out.print("두번째 계산할 값 입력 : ");
            b = s.nextInt();
            System.out.print("세번째 계산할 값 입력 : ");
            c = s.nextInt();
            System.out.print("네번째 계산할 값 입력 : ");
            d = s.nextInt();

            result = a + b + c + d;
            System.out.println(a + "+" + b + "+" + c + "+" + d + "=" + result);
        } catch (Exception e) {
            System.out.println("에러 발생!");
        }
    }
}