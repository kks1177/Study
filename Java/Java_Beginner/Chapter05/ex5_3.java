// ex5_3.java
// 기본 if문 사용 예 3

package Java_Beginner.Chapter05;

public class ex5_3 {
    public static void main(String[] args) {
        int a = 200;

        try {
            if (a < 100) {
                System.out.printf("100보다 작군요.. \n");
                System.out.printf("거짓이므로 앞의 문장은 안보이겠죠? \n"); 
            }
            System.out.printf("프로그램 끝! \n"); 
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}