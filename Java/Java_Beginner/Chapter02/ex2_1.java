// ex2_1.java
// 두 번째 프로그램 작성

package Java.Java_Beginner.Chapter02;

public class ex2_1 {
    public static void main(String[] args) {
        int a=0, b = 0;
        int result = 0;

        a = 100;
        b = 50;

        try {            
            result = a + b;
            System.out.println(a + "+" + b + "=" + result);
            
            result = a - b;
            System.out.println(a + "-" + b + "=" + result);
            
            result = a * b;
            System.out.println(a + "*" + b + "=" + result);

            result = a / b;
            System.out.println(a + "/" + b + "=" + result);
        } catch (Exception e) {
            System.out.println("오류: 0으로 나눌 수 없습니다.");
        }
    }
}
