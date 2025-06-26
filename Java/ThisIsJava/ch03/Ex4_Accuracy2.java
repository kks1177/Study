// Ex4_Accuracy2.java
// 정확한 계산은 정수 연산으로

package ThisIsJava.ch03;

public class Ex4_Accuracy2 {
    public static void main(String[] args) {
        int apple = 1;
        int totalPieces = apple * 10;
        int number = 7;

        try {
            int result = totalPieces - number;
            System.out.println("10조각에서 남은 조각 : " + result);
            System.out.println("사과 1개에서 남은 양 : " + result/10.0);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}