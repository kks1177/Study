// ex4_15.java
// 왼쪽, 오른쪽 시프트 연산자 사용 예

package Java.Java_Beginner.Chapter04;

public class ex4_15 {
    public static void main(String[] args) {
        int a = 100, result = 0;
        int i = 0;

        try {
            for (i=1; i<=5; i++) {
                result = a << i;
                System.out.printf("%d << %d = %d \n", a, i, result);                
            }
            
            for (i=1; i<=5; i++) {
                result = a >> i;
                System.out.printf("%d >> %d = %d \n", a, i, result);                
            }
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}