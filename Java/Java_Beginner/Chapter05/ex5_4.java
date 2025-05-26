// ex5_4.java
// if~else문 사용 예

package Java.Java_Beginner.Chapter05;

public class ex5_4 {
    public static void main(String[] args) {
        int a = 200;

        try {
            if (a < 100)
                System.out.printf("100보다 작군요.. \n");
            else
                System.out.printf("100보다 크군요.. \n"); 
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
