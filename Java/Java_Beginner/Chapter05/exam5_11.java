// exam5_11.java
// 단순 if문을 활용한 간단한 계산기

package Java.Java_Beginner.Chapter05;

import java.util.Scanner;

public class exam5_11 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        char ch = '\0';

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("첫번째 수 입력 : "); 
            a = s.nextInt(); 
            System.out.printf("계산할 입력자 입력 : "); 
            ch = s.next().charAt(0);
            System.out.printf("두번째 수 입력 : "); 
            b = s.nextInt();

            if (ch == '+')
                System.out.printf("%d + %d = %d 입니다. \n", a, b, a + b); 
            if (ch == '-')
                System.out.printf("%d - %d = %d 입니다. \n", a, b, a - b); 
            if (ch == '*')
                System.out.printf("%d * %d = %d 입니다. \n", a, b, a * b); 
            if (ch == '/')
                System.out.printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);
            if (ch == '%')
                System.out.printf("%d %% %d = %d 입니다. \n", a, b, a % b); 
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
