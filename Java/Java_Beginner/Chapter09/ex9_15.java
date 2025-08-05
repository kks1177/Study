// ex9_15.java
// 지역변수와 전역변수의 비교

package Java_Beginner.Chapter09;

public class ex9_15 {
    static int a = 100;
    
    static void func1() {
        int a = 200;
        System.out.printf("func1()에서 a의 값 ==> %d\n", a); 
    }
    public static void main(String[] args) {
        try {
            func1();
            System.out.printf("main()에서 a의 값 ==> %d\n", a); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}