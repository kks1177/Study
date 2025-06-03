// exam6-15.java
// 아스키코드표 출력

package Java.Java_Beginner.Chapter06;

public class exam6_15 {
    public static void main(String[] args) {
        int i = 0;

        try {
            for (i=0; i<128; i++) {
                if (i%16 == 0) {
                    System.out.printf("-----------------\n"); 
                    System.out.printf("10진수   16진수      문자 \n"); 
                    System.out.printf("-----------------\n"); 
                }
                System.out.printf("%5d %5x %5c \n", i, i, i); 
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
