// ex10_2.java
// 예외 처리의 전체 예 

package Java.Java_Beginner.Chapter10;

public class ex10_2 {
    public static void main(String[] args) {
        int aa[] = new int[3];

        try {
            aa[2] = 100 / 0;
            aa[3] = 100;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.printf("배열 첨자가 배열 크기보다 커요 ~~"); 
        } catch (ArithmeticException e) {
            System.out.println("0으로 나누는 등의 오류에요 ~~");
        } finally {
            System.out.println("이 부분은 무조건 나와요 ~~");
        }
            //System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        //}
    }
}