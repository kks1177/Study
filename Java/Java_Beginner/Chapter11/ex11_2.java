// ex11_2.java
// 자동차 클래스 생성 및 사용 예 2

package Java_Beginner.Chapter11;

class Car {
    String color = "";
    int speed = 0;

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
}

public class ex11_2 {
    public static void main(String[] args) {
        Car myCar1 = new Car();
        myCar1.color = "빨강";
        myCar1.speed = 0;
        
        try {
            myCar1.upSpeed(30);
            System.out.println("자동차1의 색상은 " + myCar1.color + "이며, 현재속도는 " + myCar1.speed + "km 입니다.");
            System.out.println("자동차1의 색상은 " + myCar1.getColor() + "이며, 현재속도는 " + myCar1.getSpeed() + "km 입니다.");          
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}