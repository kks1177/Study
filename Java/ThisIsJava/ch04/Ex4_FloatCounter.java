// Ex4_FloatCounter.java
// for문

package ThisIsJava.ch04;

public class Ex4_FloatCounter {
    public static void main(String[] args) {
        try {
            for (float x = 0.1f; x<=1.0f; x+=0.1f) {
                System.out.println(x);
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
