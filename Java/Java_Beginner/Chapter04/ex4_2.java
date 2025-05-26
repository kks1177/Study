// ex4_2.java
// 우선순위와 강제 형 변환의 예

package Java.Java_Beginner.Chapter04;

public class ex4_2 {
    public static void main(String[] args) {
        int a = 2, b = 3, c = 4;
        int result1 = 0, mok = 0, namugi = 0;
        float result2 = 0.0f;

        try {
            result1 = a + b - c;
            System.out.printf(" %d + %d - %d = %d \n", a, b, c, result1);
            
            result1 = a + b * c;
            System.out.printf(" %d + %d * %d = %d \n", a, b, c, result1);
            
            result2 = a * b / (float)c;
            System.out.printf(" %d * %d / %d = %f \n", a, b, c, result2);
            
            mok = c / b;
            System.out.printf(" %d / %d 의 몫은 %d \n", c, b, mok);
            
            namugi = c % b;
            System.out.printf(" %d / %d 의 나머지는 %d \n", c, b, namugi);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}