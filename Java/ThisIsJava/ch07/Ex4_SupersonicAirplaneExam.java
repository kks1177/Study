// Ex4_SupersonicAirplaneExam.java
// 메소드 재정의

package ThisIsJava.ch07;

public class Ex4_SupersonicAirplaneExam {
    public static void main(String[] args) {
        Ex4_SupersonicAirplane sa = new Ex4_SupersonicAirplane();
        sa.takeOff();
        sa.fly();
        sa.flyMode = Ex4_SupersonicAirplane.SUPERSONIC;
        sa.fly();
        sa.flyMode = Ex4_SupersonicAirplane.NORMAL;
        sa.fly();
        sa.land();
    }
}
