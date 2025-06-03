// ex6_3.java
// for문과 중괄호 사용 예 

package Java.Java_Beginner.Chapter06;

public class ex6_3 {
    public static void main(String[] args) {
        int i = 0;
        
        try {
            for (i=0; i<3; i++) {
                System.out.println("안녕하세요?");
                System.out.println("##또 안녕하세요?##");
            }
            System.out.println("\n");

            for (i=0; i<3; i++) 
                System.out.println("안녕하세요?");
                System.out.println("##또 안녕하세요?##");
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}