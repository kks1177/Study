// ex8_4.java
// 배열의 초기화 1

package Java.Java_Beginner.Chapter08;

public class ex8_4 {
    public static void main(String[] args) {
        int aa[] = {100, 200, 300, 400};
        int bb[] = new int[] {100, 200, 300};
        int cc[];
        cc = new int[] {100, 200};
        int[] dd = new int[1];
        dd[0] = 100;
        int i = 0;

        try {
            for (i=0; i<4; i++)
                System.out.printf("aa[%d]==>%d\t", i, aa[i]); 
            System.out.printf("\n"); 
    
            for (i=0; i<3; i++)
                System.out.printf("bb[%d]==>%d\t", i, bb[i]); 
            System.out.printf("\n"); 
            
            for (i=0; i<2; i++)
                System.out.printf("cc[%d]==>%d\t", i, cc[i]); 
            System.out.printf("\n"); 
            
            for (i=0; i<1; i++)
                System.out.printf("dd[%d]==>%d\t", i, dd[i]); 
            System.out.printf("\n");            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}