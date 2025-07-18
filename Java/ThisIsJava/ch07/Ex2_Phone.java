// Chapter07 상속
// Ex2_Phone.java
// 클래스 상속

package ThisIsJava.ch07;

public class Ex2_Phone {
    // 필드 선언
    public String model;
    public String color;

    // 메소드 선언
    public void bell() {
        System.out.println("벨이 울립니다.");
    }
    public void sendVoice(String message) {
        System.out.println("자기 : " + message);
    }
    public void receiveVoice(String message) {
        System.out.println("상대방 : " + message);
    }
    public void hangUp() {
        System.out.println("전화를 끊습니다.");
    }
}
