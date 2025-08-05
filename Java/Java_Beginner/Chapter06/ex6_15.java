// ex6_15.java
// 중첩 for문 사용 예 3

package Java_Beginner.Chapter06;

public class ex6_15 {
    public static void main(String[] args) {
        int i = 0, k = 0;

        try {
            for (i=1; i<=9; i++) {
                for (k=2; k<=9; k++) {
                    System.out.printf("%3dX%d = %2d", k, i, k*i); 
                }
                System.out.printf("\n"); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
