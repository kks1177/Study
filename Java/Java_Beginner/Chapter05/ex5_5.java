// ex5_5.java
// 중괄호를 사용한 if~else문 사용 예 1

package Java.Java_Beginner.Chapter05;

public class ex5_5 {
    public static void main(String[] args) {
        int a = 200;

        try {
            if (a<100) {
                System.out.printf("100보다 작군요.. \n"); 
                System.out.printf("참이면 이 문장도 보이겠죠? \n"); 
            } else {
                System.out.printf("100보다 크군요.. \n"); 
                System.out.printf("거짓이면 이 문장도 보이겠죠? \n");
            }
            System.out.printf("프로그램 끝! \n"); 
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
