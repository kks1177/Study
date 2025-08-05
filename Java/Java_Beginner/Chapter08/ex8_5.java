// ex8_5.java
// 배열의 초기화 2 

package Java_Beginner.Chapter08;

public class ex8_5 {
    public static void main(String[] args) {
        int[] aa = new int[100];
        int bb[] = new int[100];
        int i = 0;

        try {
            for (i=0; i<100; i++) {
                aa[i] = i * 2;
            }
    
            for (i=0; i<100; i++) {
                bb[i] = aa[99-i];
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }

        System.out.printf("bb[0]는 %d, bb[99]는 %d 입력됨 \n", bb[0], bb[99]); 
    }
}
