// ex6_1.java
// 같은 문장을 반복해서 출력

package Java_Beginner.Chapter06;

public class ex6_1 {
    public static void main(String[] args) {
        try {
            System.out.printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^ \n"); 
            System.out.printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^ \n"); 
            System.out.printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^ \n"); 
            System.out.printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^ \n"); 
            System.out.printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^ \n");             
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
