// ex4_3.java
// 증감 연산자와 대입 연산자

package Java_Beginner.Chapter04;

public class ex4_3 {
    public static void main(String[] args) {
        int a = 10;

        try {
            a++;
            System.out.printf(" a++ ==> %d \n", a);
            
            a--;
            System.out.printf(" a-- ==> %d \n", a);
            
            a += 5;
            System.out.printf(" a += 5 ==> %d \n", a);

            a -= 5;
            System.out.printf(" a -= 5 ==> %d \n", a);
            
            a *= 5;
            System.out.printf(" a *= 5 ==> %d \n", a);
            
            a /= 5;
            System.out.printf(" a /= 5 ==> %d \n", a);
            
            a %= 5;
            System.out.printf(" a %%= 5 ==> %d \n", a);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}