// exam8_21.java
// 3차원 배열을 활용한 합계

package Java.Java_Beginner.Chapter08;

public class exam8_21 {
    public static void main(String[] args) {
        int array[][][] = new int[10][10][10];
        int i = 0, j = 0, k = 0;
        int index = 1, hap = 0;

        try {
            for (i=0; i<10; i++)
                for (j=0; j<10; j++) 
                    for (k=0; k<10; k++)
                        array[i][j][k] = index++;

            for (i=0; i<10; i++)
                for (j=0; j<10; j++)
                    for (k=0; k<10; k++)
                        hap += array[i][j][k];

            System.out.printf("1~1000까지 합계 : %d", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
