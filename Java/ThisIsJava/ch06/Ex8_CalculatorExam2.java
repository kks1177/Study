// Ex8_CalculatorExam2.java
// 메소드 선언과 호출

package ThisIsJava.ch06;

public class Ex8_CalculatorExam2 {
    public static void main(String[] args) {
        // 객체 생성
        Ex8_Calculator2 myCalcu = new Ex8_Calculator2();

        // 정사각형의 넓이 구하기
        double result1 = myCalcu.areaRectangle(10);

        // 직사각형의 넓이 구하기
        double result2 = myCalcu.areaRectangle(10, 20);

        System.out.println("정사각형 넓이 = " + result1);
        System.out.println("직사각형 넓이 = " + result2);
    }
}
