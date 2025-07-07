// Ex7_Car_Overloading.java
// 생성자 선언과 호출 - 생성자 오버로딩

package ThisIsJava.ch06;

public class Ex7_Car2 {
    // 필드 선언
    String  company = "현대자동차";
    String model = "";
    String color = "";
    int maxSpeed = 0;

    // 생성자 선언
    Ex7_Car2() {}

    Ex7_Car2(String model) {
        this.model = model;
    }
    Ex7_Car2(String model, String color) {
        this.model = model;
        this.color = color;
    }
    Ex7_Car2(String model, String color, int maxSpeed) {
        this.model = model;
        this.color = color;
        this.maxSpeed = maxSpeed;
    }
}
