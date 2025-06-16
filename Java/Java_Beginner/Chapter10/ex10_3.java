// ex10_3.java
// 오류 내용의 출력 예

package Java.Java_Beginner.Chapter10;

public class ex10_3 {
    public static void main(String[] args) {
        int a = 100, b = 0;
        int result = 0;

        try {
            result = a / b;
        } catch (ArithmeticException e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}