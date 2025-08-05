// ex3_13.java
// 문자형 변수 사용 예 2

package Java_Beginner.Chapter03;

public class ex3_13 {
    public static void main(String[] args) {
        int a = 0, b = 0;
        char c = '\0', d = '\0';

        try {
            a = 0xF90A;
            b = 0x50;
            System.out.printf("%c \n", a); 

            c = (char)b;
            System.out.printf("%c \n", c);
            
            d = '#';
            System.out.printf("%c의 ASCII값은 %d입니다. \n", d, (int)d);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }        
}
