// ex11_10.java
// 클래스 변수 활용 예

package Java.Java_Beginner.Chapter11;

class Car {
    String color;
    int speed;
    static int count = 0;

    Car() {
        count++;
    }
}

public class ex11_10 {
    public static void main(String[] args) {
        Car myCar1 = new Car();
        System.out.println("현재 생상된 자동차 숫자 ==> " + myCar1.count);

        Car myCar2 = new Car();
        System.out.println("현재 생상된 자동차 숫자 ==> " + myCar2.count);

        try {
            Car myCar3 = new Car();
            System.out.println("현재 생산된 자동차 숫자 ==> " + Car.count);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
