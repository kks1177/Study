// ex11_11.java
// 클래스 메소드 활용 예

package Java.Java_Beginner.Chapter11;

class Car {
    String color;
    int speed;
    static private int count = 0;

    Car() {
        count++;
    }

    public static int getCount() {
        return count;
    }
}

public class ex11_11 {
    public static void main(String[] args) {
        System.out.println("현재 생산된 자동차 숫자 ==> " + Car.getCount());

        try {
            Car myCar1 = new Car();
            System.out.println("현재 생산된 자동차 숫자 ==> " + myCar1.getCount());            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
