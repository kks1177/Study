// Ex5_PrintFrom1To10.java
// while문

package ThisIsJava.ch04;

public class Ex5_PrintFrom1To10 {
    public static void main(String[] args) {
        int i = 1;

        try {
            while (i <= 10) {
                System.out.print(i + " ");
                i++;
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
