// ex9_18.java
// 매개변수 전달 방법(주소의 전달 - Call by Reference)

package Java.Java_Beginner.Chapter09;

class myInt {
    int a = 0;
}

public class ex9_18 {
    static void func1(myInt m) {
        m.a += 1;
        System.out.printf("전달받은 a ==> %d\n", m.a); 
    }
    public static void main(String[] args) {
        myInt m = new myInt();
        m.a = 10;

        try {
            func1(m);
            System.out.printf("func1() 실행 후의 a ==> %d\n", m.a); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}