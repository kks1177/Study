// ex6_14.java
// 중첩 for문 사용 예 2

package Java_Beginner.Chapter06;

public class ex6_14 {
    public static void main(String[] args) {
        int i = 0, k = 0;

        try {
            for (i=2; i<=9; i++) {
                for (k=1; k<=9; k++) {
                    System.out.printf(" %d X %d =  %d \n", i, k, i*k); 
                }
                System.out.printf("\n"); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}