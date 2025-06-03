// ex6_17.java
// 다양한 for문의 형태 2

package Java.Java_Beginner.Chapter06;

public class ex6_17 {
    public static void main(String[] args) {
        int i = 0;

        try {
            for(;;) {
                System.out.printf("%d \n", i); 
                i++;
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}