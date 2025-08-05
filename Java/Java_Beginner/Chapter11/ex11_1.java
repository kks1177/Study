// ex11_1.java
// 자동차 클래스 생성 및 사용 예 1

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
}

public class ex11_1 {
    public static void main(String[] args) {
        Car myCar1 = new Car();
        Car myCar2 = new Car();
        Car myCar3 = new Car();

        try {
            myCar1.color = "빨강";
            myCar1.speed = 0;
    
            myCar2.color = "파랑";
            myCar2.speed = 0;
    
            myCar3.color = "노랑";
            myCar3.speed = 0;
    
            myCar1.upSpeed(30);
            System.out.println("자동차1의 색상은 " + myCar1.color + "이며, 현재속도는 " + myCar1.speed + "km 입니다.");
    
            myCar2.upSpeed(60);
            System.out.println("자동차2의 색상은 " + myCar2.color + "이며, 현재속도는 " + myCar2.speed + "km 입니다.");
            
            myCar3.upSpeed(0);
            System.out.println("자동차3의 색상은 " + myCar3.color + "이며, 현재속도는 " + myCar3.speed + "km 입니다.");            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}