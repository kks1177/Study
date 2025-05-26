// ex5_1.java
// 기본 if문 사용 예 1

package Java.Java_Beginner.Chapter05;

public class ex5_1 {
    public static void main(String[] args) {
        int a = 99;

        try {
            if (a < 100)
                System.out.printf("100보다 작군요.. \n"); 
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
