// ex3_4.java
// 서식을 사용한 출력의 예 2

package Java.Java_Beginner.Chapter03;

public class ex3_4 {
    public static void main(String[] args) {
        try {
            System.out.printf("%d / %d = %f", 100, 200, 0.5);
            System.out.printf("%c %c \n", 'a', 'k');
            System.out.printf("%s %s \n", "IT CookBook", "JAVA");            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}