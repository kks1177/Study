// ex3_1.java
// System.out.printf() 메소드 사용 예 1

package Java_Beginner.Chapter03;

public class ex3_1 {
    public static void main(String[] args) {
        try {
            System.out.printf("100+100");
            System.out.printf("\n");
            System.out.printf("%d", 100 + 100);
            System.out.printf("\n");
        } catch (Exception e) {
            System.out.println("에러 발생");
        }
    }
}