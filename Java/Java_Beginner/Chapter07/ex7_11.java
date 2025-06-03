// ex7_11.java
// 다중 반복문의 무한 루프

package Java.Java_Beginner.Chapter07;

public class ex7_11 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        try {
            for(;;) {
                for (i=1; i<=100; i++) {
                    hap += i;
                    if (hap > 2000) {
                        System.out.printf("%d \n", hap); 
                        hap = 0;
                        break;
                    }
                }
                System.out.printf("아직도 반복중 ... \n"); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
