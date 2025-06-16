// exam10_26.java
// 예외 처리를 활용한 간단한 계산기

package Java.Java_Beginner.Chapter10;

import java.util.Scanner;

public class exam10_26 {
    public static void main(String[] args) {
        int a = 0, b = 0, result = 0;
        char ch = '\0';

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("첫번째 수 입력 : "); 
            a = s.nextInt(); 

            System.out.printf("계산할 연산자 입력 : ");
            ch = s.next().charAt(0);

            System.out.printf("두번째 수 입력 : "); 
            b = s.nextInt();

            switch(ch) {
                case '+':       result = a + b;     break;
                case '-':       result = a - b;     break;
                case '*':
                    if(a == 0 || b == 0)
                        throw new Exception("0으로 곱하면 어차피 0입니다.");
                        result = a * b;     break;
                case '/':
                    if (b == 0)
                        throw new Exception("0으로 나누면 안됩니다.");
                        result = a / b;     break;
            }
            if (result < 0)
                throw new Exception("결과가 음수네요. ㅠㅠ");

            System.out.printf("결과 값 ==> %d", result);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}