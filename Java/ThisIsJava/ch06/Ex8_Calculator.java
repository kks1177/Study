// Ex8_Calculator.java
// 메소드 선언과 호출

package ThisIsJava.ch06;

public class Ex8_Calculator {
    // 리턴값이 없는 메소드 선언
    void powerOn() {
        System.out.println("전원 ON");
    }
    // 리턴값이 없는 메소드 선언
    void powerOff() {
        System.out.println("전원 OFF");
    }
    // 호출 시 두 정수 값을 전달받고, 
    // 호출한 곳으로 결과값 int를 리턴하는 메소드 선언
    int plus(int x, int y) {
        int result = x + y;
        return result;      // 리턴값 지정
    }
    // 호출 시 두 정수 값을 전달받고,
    // 호출한 곳으로 결과값 double을 리턴하는 메소드 선언
    double divide(int x, int y) {
        double result = (double)x / (double)y;
        return result;
    }
}
