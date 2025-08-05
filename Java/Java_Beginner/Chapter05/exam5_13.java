// exam5_13.java
// switch~case문을 활용한 간단한 계산기

package Java_Beginner.Chapter05;

import java.util.Scanner;

public class exam5_13 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        char ch = '\0';
        String[] str = new String[0];

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("수식을 한줄로 띄어쓰기로 입력 : "); 
            str = s.nextLine().split(" "); 

            a = Integer.parseInt(str[0]);
            ch = str[1].charAt(0);
            b = Integer.parseInt(str[2]);

            switch (ch) {
                case '+':
                    System.out.printf("%d + %d = %d 입니다. \n", a, b, a+b); 
                    break;
                case '-':
                    System.out.printf("%d - %d = %d 입니다. \n", a, b, a-b); 
                    break;
                case '*':
                    System.out.printf("%d * %d = %d 입니다. \n", a, b, a*b); 
                    break;
                case '/':
                    System.out.printf("%d / %d = %d 입니다. \n", a, b, a/b); 
                    break;
                case '%':
                    System.out.printf("%d %% %d = %d 입니다. \n", a, b, a%b); 
                    break;
                default:
                    System.out.printf("연산자 잘못 입력함 \n");                     
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
