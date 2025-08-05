// ex6_2.java
// 기본 for문 사용 예 

package Java_Beginner.Chapter06;

public class ex6_2 {
    public static void main(String[] args) {
        int i = 0;

        try {
            for (i = 0; i < 5; i++) {
                System.out.printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^ \n"); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}