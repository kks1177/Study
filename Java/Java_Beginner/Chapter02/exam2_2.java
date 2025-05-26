// exam2_2.java
// if문을 활용한 계산기

package Java.Java_Beginner.Chapter02;

import java.util.Scanner;

public class exam2_2 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        int result = 0;
        int k = 0;

        try(Scanner s = new Scanner(System.in)) {
            System.out.print("첫번째 계산할 값 입력 : ");
            a = s.nextInt();
            System.out.print("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
            k = s.nextInt();
            System.out.print("두번째 계산할 값 입력 : ");
            b = s.nextInt();
        
            if (k == 1) {
                result = a + b;
                System.out.println(a + "+" + b + "=" + result);
            }
            if (k == 2) {
                result = a - b;
                System.out.println(a + "-" + b + "=" + result);
            }
            if (k == 3) {
                result = a * b;
                System.out.println(a + "*" + b + "=" + result);
            }
            if (k == 4) {
                result = a / b;
                System.out.println(a + "/" + b + "=" + result);
            }
        } catch (Exception e) {
            System.out.println("에러 발생!");
        }
    }
}