// ex7_2.java
// for문을 while문으로 바꾸기 2

package Java_Beginner.Chapter07;

public class ex7_2 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        i = 1;

        try {
            while(i <= 10) { 
                hap += i;
                i++;
            }
            System.out.printf(" 1~10까지의 합 : %d \n", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
