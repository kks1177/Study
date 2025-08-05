// ex6_13.java
// 중첩 for문 사용 예 1

package Java_Beginner.Chapter06;

public class ex6_13 {
    public static void main(String[] args) {
        int i = 0, k = 0;

        try {
            for(i=0; i<3; i++) {
                for (k=0; k<2; k++) {
                    System.out.printf("중첩 for문입니다. (i값:%d, k값:%d) \n", i, k);  
                }
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
