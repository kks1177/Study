// exam2_3.java
// if문을 활용한 계산기

package Java_Beginner.Chapter02;

import java.io.IOException;
import java.util.Scanner;

public class exam2_3 {
    public static void main(String[] args) throws IOException {
        int a = 0, b = 0;
        int result = 0;
        int k = 0;

        try(Scanner s = new Scanner(System.in)) {
            System.out.print("첫번째 계산할 값 입력 : ");
            a = s.nextInt();
            System.out.print("<+>덧셈 <->뺄셈 <*>곱셈 </>나눗셈 <%>나머지 ==> ");
            k = System.in.read();
            System.out.print("두번째 계산할 값 입력 : ");
            b = s.nextInt();
        
            if (k == '+') {
                result = a + b;
                System.out.println(a + "+" + b + "=" + result);
            }
            if (k == '-') {
                result = a - b;
                System.out.println(a + "-" + b + "=" + result);
            }
            if (k == '*') {
                result = a * b;
                System.out.println(a + "*" + b + "=" + result);
            }
            if (k == '/') {
                if (b != 0) {
                    result = a / b;
                    System.out.println(a + "/" + b + "=" + result);
                } else {System.out.println("0으로 나누면 안됩니다.");}
            }
            if (k == '%') {
                if (b != 0) {
                    result = a % b;
                    System.out.println(a + "%" + b + "=" + result);
                } else {System.out.println("0으로 나누면 나머지 값이 안됩니다.");}
            }
        } catch (Exception e) {
            System.out.println("에러 발생!");
        }
    }
}