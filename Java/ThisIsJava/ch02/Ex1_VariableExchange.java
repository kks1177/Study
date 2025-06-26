// Ex1_VariableExchange.java
// 변수 선언

package ThisIsJava.ch02;

public class Ex1_VariableExchange {
    public static void main(String[] args) {
        int x = 3, y = 5;
        System.out.println("x:" + x + ", y" + y);

        int temp = x;
        x = y;
        y = temp;
        System.out.println("x:" + x + ", y" + y);
    }
}
