// ex4_1.java
// 산술 연산자의 사용 예

package Java.Java_Beginner.Chapter04;

public class ex4_1 {
    public static void main(String[] args) {
        int a = 0, b = 5, c = 3;

        try {
            a = b + c;
            System.out.printf("%d + %d = %d \n", b, c, a);
            
            a = b - c;
            System.out.printf("%d - %d = %d \n", b, c, a);
            
            a = b * c;
            System.out.printf("%d * %d = %d \n", b, c, a);
            
            a = b / c;
            System.out.printf("%d / %d = %d \n", b, c, a);
            
            a = b % c;
            System.out.printf("%d %% %d = %d \n", b, c, a);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}