// ex9_13.java
// 본격적으로 메소드 사용하기

package Java_Beginner.Chapter09;

public class ex9_13 {
    static int plus(int v1, int v2) {
        int result = 0;
        
        result = v1 + v2;

        return result;
    }
    public static void main(String[] args) {
        int hap = 0;

        try {
            hap = plus(100, 200);

            System.out.printf("100과 200의 plus() 메소드 결과는 : %d\n", hap); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}