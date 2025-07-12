// ex11_7.java
// 생성자 사용 예 2

package Java.Java_Beginner.Chapter11;

class Car {
    private String color = "";
    private int speed = 0;

    Car (String color, int speed) {
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


public class ex11_7 {
    public static void main(String[] args) {
        Car myCar1 = new Car("빨강", 0);
        Car myCar2 = new Car("파랑", 30);
        
        try {
            System.out.println("자동차1의 색상은 " + myCar1.getColor() + "이며, 현재속도는 " + myCar1.getSpeed() + "km 입니다.");
            System.out.println("자동차2의 색상은 " + myCar2.getColor() + "이며, 현재속도는 " + myCar2.getSpeed() + "km 입니다.");             
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}