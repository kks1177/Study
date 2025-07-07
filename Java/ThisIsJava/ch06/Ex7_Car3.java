// Ex7_Car_Overloading.java
// 생성자 선언과 호출

package ThisIsJava.ch06;

public class Ex7_Car3 {
    // 필드 선언
    String company = "현대자동차";
    String model = "";
    String color = "";
    int maxSpeed = 0;

    Ex7_Car3(String model) {
        // 20라인 생성자 호출
        this(model, "은색", 250);
    }
    Ex7_Car3(String model, String color) {
        // 20라인 생성자 호출
        this(model, color, 250);
    }
    Ex7_Car3(String model, String color, int maxSpeed) {
        this.model = model;
        this.color = color;
        this.maxSpeed = maxSpeed;
    }
}
