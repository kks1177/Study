// Ex10_CalculatorExam.java
// 정적 멤버

package ThisIsJava.ch06;

public class Ex10_CalculatorExam {
    public static void main(String[] args) {
        double result1 = 10 * 10 * Ex10_Calculator.pi;
        int result2 = Ex10_Calculator.plus(10, 5);
        int result3 = Ex10_Calculator.minus(10, 5);

        try {
            System.out.println("result1 : " + result1);
            System.out.println("result2 : " + result2);
            System.out.println("result3 : " + result3);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
