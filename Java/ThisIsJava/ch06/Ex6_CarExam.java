// Ex6_CarExam.java
// 필드 선언과 사용

package ThisIsJava.ch06;

public class Ex6_CarExam {
    public static void main(String[] args) {
        // Car 객체 생성
        Ex6_Car myCar = new Ex6_Car();

        try {
            // Car 객체의 필드값 읽기
            System.out.println("모델명 : " + myCar.model);
            System.out.println("시동여부 : " + myCar.start);
            System.out.println("현재속도 : " + myCar.speed);             
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
