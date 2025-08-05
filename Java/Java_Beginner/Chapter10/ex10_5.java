// ex10_5.java
// 서식화된 출력 메소드 사용 예 

package Java_Beginner.Chapter10;

public class ex10_5 {
    public static void main(String[] args) {
        int a = 1234;
        float b = 100.12345f;
        char ch = 'K';
        String s = "IT Cookbook";

        System.out.printf("정수의 10진수 ==> %d\n", a);
        System.out.printf("정수의 16진수 ==> %X\n", a); 
        System.out.printf("정수의  8진수 ==> %o\n", a); 
        System.out.printf("실수 ==> %10.3f\n", b); 
        System.out.printf("실수(공학용) ==> %e\n", b); 
        System.out.printf("문자 ==> %c\n", ch); 
        System.out.printf("문자열 ==> %s\n", s); 
    }
}
