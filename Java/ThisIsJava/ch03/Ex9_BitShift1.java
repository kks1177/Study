// Ex9_BitShift1.java
// 비트 이동 연산자

package ThisIsJava.ch03;

public class Ex9_BitShift1 {
    public static void main(String[] args) {
        int num1 = 1;
        int result1 = num1 << 3;
        int result2 = num1 * (int)Math.pow(2, 3);
        
        try {
            System.out.println("result1 : " + result1);
            System.out.println("result2 : " + result2);

            int num2 = -8;
            int result3 = num2 >> 3;
            int result4 = num2 / (int)Math.pow(2, 3);
            System.out.println("result3 : " + result3);
            System.out.println("result4 : " + result4);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
