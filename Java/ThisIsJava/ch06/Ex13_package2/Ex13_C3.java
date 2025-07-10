// Ex13_C3.java
// 접근 제한자

package ThisIsJava.ch06.Ex13_package2;

import ThisIsJava.ch06.Ex13_package1.*;

public class Ex13_C3 {
    // 생성자 선언
    public Ex13_C3() {
        // 객체 생성
        Ex13_A3 a = new Ex13_A3();

        // 필드값 변경
        a.field1 = 1;       // o
        //a.field2 = 1;       // x
        //a.field3 = 1;       // x

        // 메소드 호출
        a.method1();        // o
        //a.method2();        // x
        //a.method3();        // x
    }
}
