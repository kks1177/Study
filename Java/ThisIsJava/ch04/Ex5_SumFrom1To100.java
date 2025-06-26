// Ex5_SumFrom1To100.java
// while문

package ThisIsJava.ch04;

public class Ex5_SumFrom1To100 {
    public static void main(String[] args) {
        int sum = 0;
        int i = 1;

        try {
            while (i <= 100) {
                sum += i;
                i++;
            }
            System.out.println("1~" + (i-1) + " 합 : " + sum);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
