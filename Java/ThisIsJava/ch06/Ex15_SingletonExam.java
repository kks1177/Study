// Ex15_SingletonExam.java
// 싱글톤 패턴

package ThisIsJava.ch06;

public class Ex15_SingletonExam {
    public static void main(String[] args) {
        /*
         * Singleton obj1 = new Singleton();    // 컴파일 에러
         * Singleton obj2 = new Singleton();    // 컴파일 에러
        */

        // 정적메소드를 호출해서 싱글톤 객체 얻음
        Ex15_Singleton obj1 = Ex15_Singleton.getInstance();
        Ex15_Singleton obj2 = Ex15_Singleton.getInstance();

        // 동일한 객체를 참조하는지 확인
        if (obj1 == obj2) {
            System.out.println("같은 Singleton 객체입니다.");
        } else {
            System.out.println("다른 Singleton 객체입니다.");
        }
    }
}
