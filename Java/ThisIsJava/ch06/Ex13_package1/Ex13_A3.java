// Ex13_A3.java
// 접근 제한자

package ThisIsJava.ch06.Ex13_package1;

public class Ex13_A3 {
    // public 접근 제한을 갖는 필드 선언
    public int field1;
    // default 접근 제한을 갖는 필드 선언
    int field2;
    // private 접근 제한을 갖는 필드 선언
    private int field3;

    // 생성자 선언
    public Ex13_A3() {
        field1 = 1;
        field2 = 1;
        field3 = 1;

        method1();
        method2();
        method3();
    }

    // public 접근 제한을 갖는 메소드 선언
    public void method1() {

    }

    // default 접근 제한을 갖는 메소드 선언
    void method2(){

    }

    // private 접근 제한을 갖는 메소드 선언
    private void method3() {
        
    }
}
