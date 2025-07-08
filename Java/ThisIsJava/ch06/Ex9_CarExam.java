// Ex9_CarExam.java
// 인스턴스 멤버

package ThisIsJava.ch06;

public class Ex9_CarExam {
    public static void main(String[] args) {
        Ex9_Car myCar = new Ex9_Car("포르쉐");
        Ex9_Car yourCar = new Ex9_Car("벤츠");

        myCar.run();
        yourCar.run();
    }
}