// ex3_12.java
// 문자형 변수 사용 예 1

package Java.Java_Beginner.Chapter03;

public class ex3_12 {
    public static void main(String[] args) {
        char a = '\0', b = '\0', c = '\0', d = '\0', e = '\0';

        try {
            a = 'A';
            System.out.printf(" %c \t", a);
            System.out.printf(" %d \n", (int)a); 
            
            b = 'a';
            c = (char) (b+1);
            System.out.printf(" %c \t", b); 
            System.out.printf(" %c \n", c); 

            d = 90;
            System.out.printf(" %c \n", d); 

            d = '가';
            e = (char) (d+1);
            System.out.printf(" %d \t", (int)d); 
            System.out.printf(" %c \n", e); 
        } catch (Exception ex) {
            System.err.println("예외 발생: " + ex.getMessage());
        }
    }
}