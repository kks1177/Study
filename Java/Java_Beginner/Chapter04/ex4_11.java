// ex4_11.java
// 비트 연산에 마스크를 사용한 예

package Java.Java_Beginner.Chapter04;

public class ex4_11 {
    public static void main(String[] args) {
        byte a = 'A', b;
        byte mask = 0x0F;

        try {
            System.out.printf(" %X & %X = %X \n", a, mask, a & mask);
            System.out.printf(" %X | %X = %X \n", a, mask, a | mask);

            mask = 'a' - 'A';

            b = (byte) (a^mask);
            System.out.printf(" %c ^ %d = %c \n", a, mask, b);
            a = (byte) (b^mask);
            System.out.printf(" %c ^ %d = %c \n", b, mask, a);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}