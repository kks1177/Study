// Ex4_SupersonicAirplane.java
// 메소드 재정의

package ThisIsJava.ch07;

public class Ex4_SupersonicAirplane extends Ex4_Airplane{
    // 상수 선언
    public static final int NORMAL = 1;
    public static final int SUPERSONIC = 2;
    // 상태 필드 선언
    public int flyMode = NORMAL;

    // 메소드 재정의
    @Override
    public void fly() {
        if (flyMode == SUPERSONIC) {
            System.out.println("초음속 비행합니다.");
        } else {
            // Airplane 객체의 fly() 메소드 호출
            super.fly();
        }
    }
}
