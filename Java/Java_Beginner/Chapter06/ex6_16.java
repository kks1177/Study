// ex6_16.java
// 다양한 for문의 형태 1

package Java_Beginner.Chapter06;

public class ex6_16 {
    public static void main(String[] args) {
        int i = 0, k = 0;

        try {
            for (i=1, k=1; i<=9; i++, k++) {
                System.out.printf(" %d X %d = %d \n", i, k, i*k); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
