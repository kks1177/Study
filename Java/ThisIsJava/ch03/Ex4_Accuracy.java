// Ex4_Accuracy.java
// 정확한 계산은 정수 연산으로

package ThisIsJava.ch03;

public class Ex4_Accuracy {
    public static void main(String[] args) {
        int apple = 1;
        double pieceUnit = 0.1;
        int number = 7;

        try {
            double result = apple - number*pieceUnit;
            System.out.println("사과 1개에서 남은 양 : " + result);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
