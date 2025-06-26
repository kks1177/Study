// Chapter03 연산자
// Ex1_SignOperator.java
// 부호/증감 연산자

package ThisIsJava.ch03;

public class Ex1_SignOperator {
    public static void main(String[] args) {
        int x = -100;

        try {
            x = -x;
            System.out.println("x : " + x);
    
            byte b = 100;
            int y = -b;
            System.out.println("y : " + y);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}