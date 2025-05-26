// ex3_7.java
// 변수에 값을 대입

package Java.Java_Beginner.Chapter03;

public class ex3_7 {
    public static void main(String[] args) {
        int a = 0;
        float b = 0;

        try {
            a = (int) 123.45f;
            b = 200;
    
            System.out.printf("a의 값 ==> %d \n", a);
            System.out.printf("b의 값 ==> %f \n", b);            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}