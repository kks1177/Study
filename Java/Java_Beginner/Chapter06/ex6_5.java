// ex6_5.java
// for문 사용 예 2

package Java_Beginner.Chapter06;

public class ex6_5 {
    public static void main(String[] args) {
        int i = 0;

        try {
            for (i=1; i<=5; i++)
                System.out.printf("%d \n", i);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
