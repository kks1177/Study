// Ex13_B3.java
// 접근 제한자

package ThisIsJava.ch06.Ex13_package1;

public class Ex13_B3 {
    public void method() {
        // 객체 생성
        Ex13_A3 a = new Ex13_A3();

        // 필드값 변경
        a.field1 = 1;       // o
        a.field2 = 1;       // o
        //a.field3 = 1;       // x

        // 메소드 호출
        a.method1();        // o
        a.method2();        // o
        //a.method3();        // x
    }
}
