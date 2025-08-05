// ex4_7.java
// 논리 연산자 사용 예 2

package Java_Beginner.Chapter04;

public class ex4_7 {
    public static void main(String[] args) {
        int num1 = 100, num2 = -200;

        try {
            boolean a = (num1 != 0);
            boolean b = (num2 != 0);

            System.out.printf(" 상수의 AND 연산 : %s \n", a && b);
            System.out.printf(" 상수의 OR 연산 : %s \n", a || b);
            System.out.printf(" 상수의 NOT 연산 : %s \n", !a);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}