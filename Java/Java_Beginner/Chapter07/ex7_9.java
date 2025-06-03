// ex7_9.java
// break문 사용 예 3

package Java.Java_Beginner.Chapter07;

public class ex7_9 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        try {
            for (i=1; i<=100; i++) {
                hap += i;

                if (hap >= 1000)
                    break;
            }
            System.out.printf("1~100의 합에서 최초로 1000이 넘는 위치는? : %d \n", i); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
