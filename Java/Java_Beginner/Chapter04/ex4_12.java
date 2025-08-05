// ex4_12.java
// 비트 부정 연산자 사용 예

package Java_Beginner.Chapter04;

public class ex4_12 {
    public static void main(String[] args) {
        int a = 12345;

        try {
            System.out.printf(" %d \n", ~a+1);
            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}