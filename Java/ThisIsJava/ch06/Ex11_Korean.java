// Ex11_Korean.java
// final 필드와 상수

package ThisIsJava.ch06;

public class Ex11_Korean {
    // 인스턴스 final 필드 선언
    final String nation = "대한민국";
    final String ssn;

    // 인스턴스 필드 선언
    String name;

    // 생성자 선언
    public Ex11_Korean(String ssn, String name) {
        this.ssn = ssn;
        this.name = name;
    }
}
