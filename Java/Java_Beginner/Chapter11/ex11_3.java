// ex11_3.java
// private 접근 제어 수식어 사용 예

package Java.Java_Beginner.Chapter11;

class Car {
    private String color = "";
    private int speed = 0;

    void upSpeed(int value) {
        speed += value;
    }
    void downSpeed(int value) {
        speed -= value;
    }
    String getColor() {
        return color;
    }
    int getSpeed() {
        return speed;
    }
    void setColor(String color) {
        this.color = color;
    }
    void setSpeed(int speed) {
        this.speed = speed;
    }
}

public class ex11_3 {
    public static void main(String[] args) {
        Car myCar1 = new Car();

        myCar1.setColor("빨강");
        myCar1.setSpeed(0);

        myCar1.upSpeed(30);
        System.out.println("자동차1의 색상은 " + myCar1.getColor() + "이며, 현재속도는 " + myCar1.getSpeed() + "km입니다.");
    }
}