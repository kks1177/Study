// ex3_11.java
// 소수점이 있는 실수형

package Java.Java_Beginner.Chapter03;

public class ex3_11 {
    public static void main(String[] args) {
        float a = 0.1234567890123456789012345f;
        double b = 0.1234567890123456789012345;

        try {
            System.out.printf("%30.25f \n", a);
            System.out.printf("%30.25f \n", b);            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
