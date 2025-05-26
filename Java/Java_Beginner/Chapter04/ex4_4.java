// ex4_4.java
// 증감 연산자 사용 예

package Java.Java_Beginner.Chapter04;

public class ex4_4 {
    public static void main(String[] args) {
        int a = 10, b = 0;
    
        try {
            b = a++;
            System.out.printf(" %d \n", b);
            
            b = ++a;
            System.out.printf(" %d \n", b);        
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }        
    }
}
