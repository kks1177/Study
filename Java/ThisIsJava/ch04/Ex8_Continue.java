// Ex8_Continue.java
// continue문

package ThisIsJava.ch04;

public class Ex8_Continue {
    public static void main(String[] args) {
        try {
            for (int i = 1; i<=10; i++) {
                if(i%2 != 0) {
                    continue;
                }
                System.out.print(i + " ");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}