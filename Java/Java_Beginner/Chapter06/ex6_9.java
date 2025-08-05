// ex6_9.java
// for문을 사용하여 합계 구하기 3

package Java_Beginner.Chapter06;

public class ex6_9 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        try {
            for (i=501; i<=1000; i+=2) {
                hap += i;
            }
    
            System.out.printf(" 500에서 1000까지의 홀수의 합: %d \n", hap);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
