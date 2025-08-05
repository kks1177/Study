// ex4_5.java
// 관계 연산자 사용 예

package Java_Beginner.Chapter04;

public class ex4_5 {
    public static void main(String[] args) {
        int a = 100, b = 200;

        try {
            System.out.printf(" %d == %d 는 %s  이다.\n", a, b, a==b);
            System.out.printf(" %d != %d 는 %s  이다.\n", a, b, a!=b);
            System.out.printf(" %d > %d 는 %s  이다.\n", a, b, a>b);
            System.out.printf(" %d < %d 는 %s  이다.\n", a, b, a<b);
            System.out.printf(" %d >= %d 는 %s  이다.\n", a, b, a>=b);
            System.out.printf(" %d <= %d 는 %s  이다.\n", a, b, a<=b);

            System.out.printf(" %d = %d 는 %s  이다.\n", a, b, a=b);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}