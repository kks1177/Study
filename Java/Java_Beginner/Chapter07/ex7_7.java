// ex7_7.java
// break문 사용 예 1

package Java.Java_Beginner.Chapter07;

public class ex7_7 {
    public static void main(String[] args) {
        int i = 0;

        try {
            for (i=1; i<=100; i++) {
                System.out.printf("for문을 %d회 실행했습니다. \n", i); 
                //break;
            }

            System.out.printf("for문을 종료했습니다. \n"); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
