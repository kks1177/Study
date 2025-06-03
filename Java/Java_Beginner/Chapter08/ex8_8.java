// ex8_8.java
// 2차원 배열 사용 예 2

package Java.Java_Beginner.Chapter08;

public class ex8_8 {
    public static void main(String[] args) {
        int[][] aa = new int[3][4];
        int i = 0, k = 0;
        int val = 1;

        for (i=0; i<3; i++) {
            for (k=0; k<4; k++) {
                aa[i][k] = val;
                val++;
            }
        }

        System.out.printf("aa[0][0]~aa[2][3]까지 출력 \n"); 

        for (i=0; i<3; i++) {
            for (k=0; k<4; k++){
                System.out.printf("%3d", aa[i][k]); 
            }
            System.out.printf("\n"); 
        }
    }
}
