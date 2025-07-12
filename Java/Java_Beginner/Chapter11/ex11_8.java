// ex11_8.java
// 메소드 오버로딩 1

package Java.Java_Beginner.Chapter11;

class Car {
    private String color = "";
    private int speed = 0;

    Car() {}
    Car(String color) {
        this.color = color;
    }
    Car(String color, int speed) {
        this.color = color;
        this.speed = speed;
    }

    public String getColor() {
        return color;
    }
    public int getSpeed() {
        return speed;
    }
}

public class ex11_8 {
    public static void main(String[] args) {
        Car myCar1 = new Car();
        Car myCar2 = new Car("빨강");
        Car myCar3 = new Car("파랑", 30);

        try {
            System.out.println("자동차1의 색상은 " + myCar1.getColor() + "이며, 현재속도는 " + myCar1.getSpeed() + "km 입니다.");        
            System.out.println("자동차2의 색상은 " + myCar2.getColor() + "이며, 현재속도는 " + myCar2.getSpeed() + "km 입니다.");
            System.out.println("자동차3의 색상은 " + myCar3.getColor() + "이며, 현재속도는 " + myCar3.getSpeed() + "km 입니다.");             
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
