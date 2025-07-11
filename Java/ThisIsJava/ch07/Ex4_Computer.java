// Ex4_Computer.java
// 메소드 재정의

package ThisIsJava.ch07;

public class Ex4_Computer extends Ex4_Calculator {
    // 메소드 오버라이딩
    @Override
    public double areaCircle(double r) {
        System.out.println("Computer 객체의 areaCircle() 실행");
        return Math.PI * r * r;
    }
}
