// ex7_1.java
// for문을 while문으로 바꾸기 1

package Java_Beginner.Chapter07;

public class ex7_1 {
    public static void main(String[] args) {
        int i = 0;

        try {
            while (i<5) {
                System.out.printf("while문을 공부합니다. \n"); 
                i++;
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}