// ex3_9.java
// 변수에 변수를 대입 2

package Java_Beginner.Chapter03;

public class ex3_9 {
    public static void main(String[] args) {
        int a=0, b=0, c=0, d=0;
        
        try {
            a = 100 + 100;
            b = a + 100;
            c = a + b - 100;
            d = a + b + c;
            System.out.printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
    
            a = b = c = d = 100;
            System.out.printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
    
            a = 100;
            a += 200;
            System.out.printf("a의 값 ==> %d \n", a);            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}