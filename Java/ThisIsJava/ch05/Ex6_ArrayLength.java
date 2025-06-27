// Ex6_ArrayLength.java
// 배열(Array) 타입

package ThisIsJava.ch05;

public class Ex6_ArrayLength {
    public static void main(String[] args) {
        // 배열 변수 선언과 배열 대입
        int[] scores = {84, 90, 96};

        // 배열 항목의 총합 구하기
        int sum = 0;

        try {
            for (int i=0; i<scores.length; i++) {
                sum += scores[i];
            }
            System.out.println("총합 : " + sum);
    
            // 배열 항목의 평균 구하기
            double avg = (double)sum / scores.length;
            System.out.println("평균 : " + avg);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
