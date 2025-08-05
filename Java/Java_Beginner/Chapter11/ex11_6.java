// ex11_6.java
// 생성자 사용 예 1

package Java_Beginner.Chapter11;

class Car {
    private String color = "";
    private int speed = 0;

    Car() {
        color = "빨강";
        speed = 0;
    }

    public String getColor() {
        return color;
    }
    public int getSpeed() {
        return speed;
    }
}

public class ex11_6 {
    public static void main(String[] args) {
        try {
            Car myCar1 = new Car();
            Car myCar2 = new Car();

            System.out.println("자동차1의 색상은 " + myCar1.getColor() + "이며, 현재속도는 " + myCar1.getSpeed() + "km 입니다.");
            System.out.println("자동차2의 색상은 " + myCar2.getColor() + "이며, 현재속도는 " + myCar2.getSpeed() + "km 입니다."); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
