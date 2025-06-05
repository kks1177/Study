// ex9_17.java
// 매개변수 전달 방법 (값의 전달 - Call by Value) 

package Java.Java_Beginner.Chapter09;

public class ex9_17 {
    static void func1(int a) {
        a += 1;
        System.out.printf("전달받은 a ==> %d\n", a); 
    }
    public static void main(String[] args) {
        int a = 10;

        try {
            func1(a);
            System.out.printf("func1() 실행 후의 a ==> %d\n", a); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}