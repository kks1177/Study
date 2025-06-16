// ex10_1.java
// 예외 처리 기본 예

package Java.Java_Beginner.Chapter10;

public class ex10_1 {
    public static void main(String[] args) {
        int aa[] = new int[3];

        try {
            aa[3] = 100;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("배열 첨자가 배열 크기보다 커요 ~~");
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}