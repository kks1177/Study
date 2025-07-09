// Ex10_Car.java
// 정적 멤버

package ThisIsJava.ch06;

public class Ex10_Car {
    // 인스턴스 필드 선언
    int speed = 0;

    // 인스턴스 메소드 선언
    void run() {
        System.out.println(speed + "으로 달립니다.");
    }

    static void simulate() {
        // 객체 생성
        Ex10_Car myCar = new Ex10_Car();
        // 인스턴스 멤버 사용
        myCar.speed = 200;
        myCar.run();
    }

    public static void main(String[] args) {
        // 정적 메소드 호출
        simulate();

        // 객체 생성
        Ex10_Car myCar = new Ex10_Car();
        // 인스턴스 멤버 사용
        myCar.speed = 60;
        myCar.run();
    }
}
