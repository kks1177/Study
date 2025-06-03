// ex7_10.java
// continue문 사용 예

package Java.Java_Beginner.Chapter07;

public class ex7_10 {
    public static void main(String[] args) {
        int hap = 0, i = 0;

        try {
            for (i=1; i<=100; i++) {
                if (i % 3 == 0)
                    continue;

                hap += i;
            }

            System.out.printf("1~100까지의 합(3의 배수 제외) : %d \n", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}