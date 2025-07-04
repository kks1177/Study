// Ex6_ArrayCreateByValueList2.java
// 배열(Array) 타입

package ThisIsJava.ch05;

public class Ex6_ArrayCreateByValueList2 {
    public static void main(String[] args) {
        // 배열 변수 선언
        int[] scores;
        // 배열 변수에 배열을 대입
        scores = new int[] {83, 90, 87};
        // 배열 항목의 총합을 구하고 출력
        int sum1 = 0;

        try {
            for(int i=0; i<3; i++) {
                sum1 += scores[i];
            }
            System.out.println("총합 : " + sum1);

            // 배열을 매개값으로 주고, printItem() 메소드 호출
            printItem(new int[] {83, 90, 87});
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
    
    // printItem() 메소드 선언
    public static void printItem(int[] scores) {
        // 매개변수가 참조하는 배열의 항목을 출력
        for (int i=0; i<3; i++) {
            System.out.println("score[" + i + "]:" + scores[i]);
        }
    }
}
