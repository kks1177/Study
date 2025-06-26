// Ex2_ArithmeticOperator.java
// 산술 연산자

package ThisIsJava.ch03;

public class Ex2_ArithmeticOperator {
    public static void main(String[] args) {
        byte v1 = 10;
        byte v2 = 4; 
        int v3 = 5;
        long v4 = 10L;

        try {
            int result1 = v1 + v2;
            System.out.println("result1 : " + result1);

            long result2 = v1 + v2 - v4;
            System.out.println("result2 : " + result2);

            double result3 = (double)v1 / v2;
            System.out.println("result3 : " + result3);

            int result4 = v1 % v2;
            System.out.println("result4 : " + result4);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
