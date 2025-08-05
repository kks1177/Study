// ex4_13.java
// 왼쪽 시프트 연산자 사용 예

package Java_Beginner.Chapter04;

public class ex4_13 {
    public static void main(String[] args) {
        int a = 10;

        try {
            System.out.printf("%d 를 왼쪽 1회 시프트하면 %d 이다.\n", a, a<<1);
            System.out.printf("%d 를 왼쪽 2회 시프트하면 %d 이다.\n", a, a<<2);
            System.out.printf("%d 를 왼쪽 3회 시프트하면 %d 이다.\n", a, a<<3);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}