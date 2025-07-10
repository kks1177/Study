// Ex2_SmartPhone.java
// 클래스 상속

package ThisIsJava.ch07;

public class Ex2_SmartPhone extends Ex2_Phone {
    // 필드 선언
    public boolean wifi;

    // 생성자 선언
    public Ex2_SmartPhone(String model, String color) {
        this.model = model;
        this.color = color;
    }

    // 메소드 선언
    public void setWifi(boolean wifi) {
        this.wifi = wifi;
        System.out.println("와이파이 상태를 변경했습니다.");
    }
    public void internet() {
        System.out.println("인터넷에 연결합니다.");
    }
}
