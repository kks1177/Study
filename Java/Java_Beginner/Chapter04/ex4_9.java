// ex4_9.java
// 비트 논리합 연산자 사용 예

package Java_Beginner.Chapter04;

public class ex4_9 {
    public static void main(String[] args) {
        try {
            System.out.printf(" 10 | 7 = %d \n", 10 | 7);
            System.out.printf(" 123 | 456 = %d \n", 123 | 456);

            System.out.printf(" 0xFFFF | 0000 = %d \n", 0xFFFF | 0000);        
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}