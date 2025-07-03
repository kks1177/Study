// Ex6_CarExam2.java
// 필드 선언과 사용

package ThisIsJava.ch06;

public class Ex6_CarExam2 {
    public static void main(String[] args) {
        // Car 객체 생성
        Ex6_Car2 myCar = new Ex6_Car2();

        // Car 객체의 필드값 읽기
        System.out.println("제작회사 : " + myCar.company);
        System.out.println("모델명 : " + myCar.model);
        System.out.println("색깔 : " + myCar.color);
        System.out.println("최고속도 : " + myCar.maxSpeed);
        System.out.println("현재속도 : " + myCar.speed);

        try {
            // Car 객체의 필드값 변경
            myCar.speed = 60;
            System.out.println("수정된 속도 : " + myCar.speed);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
