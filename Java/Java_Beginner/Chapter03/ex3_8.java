// ex3_8.java
// 변수에 변수를 대입 1

package Java.Java_Beginner.Chapter03;

public class ex3_8 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        float c = 0, d = 0;

        try {
            a = 100;
            b = a;
    
            c = 111.1f;
            d = c;
    
            System.out.printf("a, b의 값 ==> %d, %d \n", a, b);
            System.out.printf("c, d의 값 ==> %5.1f, %5.1f \n", c, d);            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}