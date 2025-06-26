// Ex4_SumFrom1To100.java
// for문

package ThisIsJava.ch04;

public class Ex4_SumFrom1To100 {
    public static void main(String[] args) {
        int sum = 0, i = 0;

        try {
            for (i = 1; i<=100; i++) {
                sum += i;
            }
            System.out.println("1~" + (i-1) + " 합 : " + sum);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
