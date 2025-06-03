// ex6_6.java
// for문을 사용하지 않고 합계 구하기

package Java.Java_Beginner.Chapter06;

public class ex6_6 {
    public static void main(String[] args) {
        int hap = 0;

        try {
            hap = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;

            System.out.printf("1~10까지의 합 : %d \n", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}