// ex3_10.java
// 소수점이 없는 정수형

package Java_Beginner.Chapter03;

public class ex3_10 {
    public static void main(String[] args) {
        int a = 100, b = 200;
        float result = 0;

        try {
            result = a / b;
    
            System.out.printf("%f  \n", result);            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
