// Ex15_Singleton.java
// 싱글톤 패턴

package ThisIsJava.ch06;

public class Ex15_Singleton {
    // private 접근 권한을 갖는 정적 필드 선언과 초기화
    private static Ex15_Singleton singleton = new Ex15_Singleton();

    // private 접근 권한을 갖는 생성자 선언
    private Ex15_Singleton() {

    }

    // public 접근 권한을 갖는 정적메소드 선언
    public static Ex15_Singleton getInstance() {
        return singleton;
    }
}
