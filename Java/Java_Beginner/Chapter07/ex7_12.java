// ex7_12.java
// break 레이블문 사용 예 

package Java.Java_Beginner.Chapter07;

public class ex7_12 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        try {
            myLabel: for(;;) {
                for (i=1; i<=100; i++) {
                    hap += i;
                    if (hap > 2000) {
                        System.out.printf("%d \n", hap); 
                        hap = 0;
                        break myLabel;
                    }
                }
                System.out.printf("아직도 반복중... \n"); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}