// ex7_13.java
// return문 사용 예

package Java.Java_Beginner.Chapter07;

public class ex7_13 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        try {
            for (i=1; i<=100; i++) {
                hap += i;
            }
            
            System.out.printf("1~100까지의 합은 %d입니다. \n", hap); 

            if (hap > 5000) 
                return;

            System.out.printf("프로그램의 끝!~"); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}