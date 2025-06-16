// ex11_5.java
// private, public 접근 제어 수식어 활용 예

package Java.Java_Beginner.Chapter11;

class Car {
    private int speed = 0;

    public void upSpeed(int value) {
        if (speed + value > 200)
            speed = 200;
        else
            speed += value;

        System.out.println("현재 속도 ==> " + getSpeed());
    }
    public void downSpeed(int value) {
        if (speed - value < 0)
            speed = 0;
        else 
            speed -= value;
        
        System.out.println("현재 속도 ==> " + getSpeed());
    }

    public int getSpeed() {
        return speed;
    }
}

public class ex11_5 {
    public static void main(String[] args) {
        Car myCar1 = new Car();

        try {
            myCar1.upSpeed(100);
            myCar1.upSpeed(150);
    
            myCar1.downSpeed(50);
            myCar1.downSpeed(160);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}