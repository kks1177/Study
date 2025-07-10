// Ex3_SmartPhone2.java
// 부모 생성자 호출

package ThisIsJava.ch07;

public class Ex3_SmartPhone2 extends Ex3_Phone2 {
    // 자식 생성자 선언
    public Ex3_SmartPhone2(String model, String color) {
        super(model, color);
        System.out.println("SmartPhone2(String model, String color) 생성자 실행됨");
    }
}
