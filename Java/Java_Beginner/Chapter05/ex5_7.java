// ex5_7.java
// 중첩 if문 사용 예 1

package Java.Java_Beginner.Chapter05;

public class ex5_7 {
    public static void main(String[] args) {
        int a = 75;

        try {
            if (a>50) {
                if (a<100) {
                    System.out.printf("50보다 크고 100보다 작군요.. \n");
                } else {
                    System.out.printf("와~~ 100보다 크군요.. \n"); 
                }
            } else {
                System.out.printf("애걔~ 50보다 작군요.. \n"); 
            }
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
