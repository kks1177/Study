// Ex9_CarExam.java
// 인스턴스 멤버

package ThisIsJava.ch06;

public class Ex9_CarExam {
    public static void main(String[] args) {
        Ex9_Car myCar = new Ex9_Car("포르쉐");
        Ex9_Car yourCar = new Ex9_Car("벤츠");

        try {
            myCar.run();
            yourCar.run();            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}