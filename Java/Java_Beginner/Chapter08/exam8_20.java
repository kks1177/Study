// exam8_20.java
// 구구단의 결과를 2차원 배열에 저장

package Java_Beginner.Chapter08;

public class exam8_20 {
    public static void main(String[] args) {
        int gugu[][] = new int[9][9];
        int i = 0, k = 0;

        try {
            for (i=0; i<9; i++) 
                for (k=0; k<9; k++)
                    gugu[i][k] = (i+1) * (k+1);

            for (i=0; i<9; i++) 
                for (k=0; k<9; k++)
                    System.out.printf("%dX%d=%2d ", k+1, i+1, gugu[i][k]); 
                System.out.printf("\n"); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}