// Ex3_Phone2.java
// 부모 생성자 호출

package ThisIsJava.ch07;

public class Ex3_Phone2 {
    // 필드 선언
    public String model;
    public String color;

    // 매개변수를 갖는 생성자 선언
    public Ex3_Phone2(String model, String color) {
        this.model = model;
        this.color = color;
        System.out.println("Phone2(String model, String color) 생성자 실행");
    }
}
