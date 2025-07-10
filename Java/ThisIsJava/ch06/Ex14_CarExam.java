// Ex14_CarExam.java
// Getter와 Setter

package ThisIsJava.ch06;

public class Ex14_CarExam {
    public static void main(String[] args) {
        // 객체 생성
        Ex14_Car myCar = new Ex14_Car();

        // 잘못된 속도 변경
        myCar.setSpeed(-50);
        System.out.println("현재 속도 : " + myCar.getSpeed());

        // 올바른 속도 변경
        myCar.setSpeed(60);
        System.out.println("현재 속도 : " + myCar.getSpeed());

        // 멈춤
        if (!myCar.isStop()) {
            myCar.setStop(true);
        }
        System.out.println("현재 속도 : " + myCar.getSpeed());
    }
}
