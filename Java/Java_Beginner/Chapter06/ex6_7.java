// ex6_7.java
// for문을 사용하여 합계 구하기 1

package Java_Beginner.Chapter06;

public class ex6_7 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        try {
            for (i=1; i<=10; i++) {
                hap += i;
            }
    
            System.out.printf(" 1에서 10까지의 합 : %d \n", hap);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
