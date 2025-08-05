// ex6_4.java
// for문 사용 예 1

package Java_Beginner.Chapter06;

public class ex6_4 {
    public static void main(String[] args) {
        int i = 0;

        try {
            for (i=5; i>0; i--)
                System.out.printf("%d : 안녕하세요? 빙글빙글 for문을 공부중입니다. ^^ \n", i); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}