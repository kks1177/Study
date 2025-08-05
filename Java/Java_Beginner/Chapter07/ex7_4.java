// ex7_4.java
// 무한 루프를 활용한 계산기

package Java_Beginner.Chapter07;

//import java.io.IOException;
import java.util.Scanner;

public class ex7_4 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        char ch = '\0';

        Scanner s = new Scanner(System.in);
        try(s) {
            while(true) {
                System.out.printf("계산할 첫번째 수 입력 : "); 
                a = s.nextInt(); 
                System.out.printf("계산할 두번째 수 입력 : "); 
                b = s.nextInt(); 
                System.out.printf("계산할 연산자 입력 : "); 
                ch = (char) System.in.read();
    
                switch(ch) {
                    case '+':
                        System.out.printf("%d + %d = %d입니다. \n", a, b, a+b);     break;
                    case '-':
                        System.out.printf("%d - %d = %d입니다. \n", a, b, a-b);     break;
                    case '*':
                        System.out.printf("%d * %d = %d입니다. \n", a, b, a*b);     break;
                    case '/':
                        System.out.printf("%d / %d = %d입니다. \n", a, b, a/b);     break;
                    case '%':
                        System.out.printf("%d %% %d = %d입니다. \n", a, b, a%b);     break;
                    default:
                        System.out.printf("연산자를 잘못 입력! \n"); 
                }
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
