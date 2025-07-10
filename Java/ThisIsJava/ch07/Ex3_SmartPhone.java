// Ex3_SmartPhone.java
// 부모 생성자 호출

package ThisIsJava.ch07;

public class Ex3_SmartPhone extends Ex3_Phone {
    // 자식 생성자 선언
    public Ex3_SmartPhone(String model, String color) {
        super();
        this.model = model;
        this.color = color;

        System.out.println("SmartPhone(String model, String color) 생성자 실행됨");
    }
}
