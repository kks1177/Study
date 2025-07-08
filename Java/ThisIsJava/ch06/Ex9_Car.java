// Ex9_Car.java
// 인스턴스 멤버

package ThisIsJava.ch06;

public class Ex9_Car {
    // 필드 선언
    String model = "";
    int speed = 0;

    // 생성자 선언
    Ex9_Car(String  model) {
        this.model = model;
    }

    // 메소드 선언
    void setSpeed(int speed) {
        this.speed = speed;
    }
    void run() {
        this.setSpeed(100);
        System.out.println(this.model + "가 달립니다. (시속 : " + this.speed + "km/h)");
    }
}
