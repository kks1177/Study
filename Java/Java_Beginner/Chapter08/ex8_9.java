// ex8_9.java
// 2차원 배열의 초기화

package Java.Java_Beginner.Chapter08;

public class ex8_9 {
    public static void main(String[] args) {
        int[][] aa = {{1, 2, 3, 4}, 
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};
        int i = 0, k = 0;

        System.out.printf("aa[0][0] ~ aa[2][3]까지 출력 \n"); 

        try {
            for (i=0; i<3; i++) {
                for (k=0; k<4; k++) {
                    System.out.printf("%3d", aa[i][k]); 
                }
                System.out.printf("\n"); 
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
