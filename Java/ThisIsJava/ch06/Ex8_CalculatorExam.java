// Ex8_CalculatorExam.java
// 메소드 선언과 호출

package ThisIsJava.ch06;

public class Ex8_CalculatorExam {
    public static void main(String[] args) {
        // Calculator 객체 생성
        Ex8_Calculator myCalc = new Ex8_Calculator();

        // 리턴값이 없는 powerOn() 메소드 호출
        myCalc.powerOn();

        // plus 메소드 호출 시 5와 6을 매개값으로 제공하고, 
        // 덧셈 결과를 리턴받아 result1 변수에 대입
        int result1 = myCalc.plus(5, 6);
        System.out.println("result1 : " + result1);

        int x = 10;
        int y = 4;

        // divide() 메소드 호출 시 변수 x와 y의 값을 매개값으로 제공하고, 
        // 나눗셈 결과를 리턴받아 result2 변수에 대입
        double result2 = myCalc.divide(x, y);
        System.out.println("result2 : " + result2);

        // 리턴값이 없는 powerOff() 메소드 호출
        myCalc.powerOff();
    }
}
