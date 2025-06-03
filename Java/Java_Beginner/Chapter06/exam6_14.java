// exam6_14.java
// 구구단 출력

package Java.Java_Beginner.Chapter06;

public class exam6_14 {
    public static void main(String[] args) {
        int i = 0, k = 0;

        try {
            for (i=2; i<=9; i++) {
                System.out.printf(" #제%d단#", i); 
            }
    
            System.out.printf("\n\n"); 
    
            for (i=1; i<=9; i++) {
                for (k=2; k<=9; k++) {
                    System.out.printf("%2dX%2d=%2d", k, i, k*i); 
                }
                System.out.printf("\n"); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
