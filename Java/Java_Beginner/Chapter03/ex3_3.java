// ex3_3.java
// 서식을 사용한 출력의 예 1

package Java.Java_Beginner.Chapter03;

public class ex3_3 {
    public static void main(String[] args) {
        try {
            System.out.printf("%d / %d = %d", 100, 200, 0.5);
            System.out.printf("\n");            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}