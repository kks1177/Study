// ex3_2.java
// System.out.printf() 메소드 사용 예 2

package Java.Java_Beginner.Chapter03;

public class ex3_2 {
    public static void main(String[] args) {
        try {
            System.out.printf("%d", 100, 200);
            System.out.printf("\n");
            System.out.printf("%d %d", 100);
            System.out.printf("\n");            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}