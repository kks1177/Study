// Ex10_AssignmentOperator.java
// 대입 연산자

package ThisIsJava.ch03;

public class Ex10_AssignmentOperator {
    public static void main(String[] args) {
        int result = 0;

        try {
            result += 10;
            System.out.println("result = " + result);
            result -= 5;
            System.out.println("result = " + result);
            result *= 3;
            System.out.println("result = " + result);
            result /= 5;
            System.out.println("result = " + result);
            result %= 3;
            System.out.println("result = " + result);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}

