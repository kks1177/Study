// Ex7_CarExam.java
// 생성자 선언과 호출 

package ThisIsJava.ch06;

public class Ex7_CarExam {
    public static void main(String[] args) {
        try {
            Ex7_Car myCar = new Ex7_Car("그랜저", "검정", 250);
            // Car myCar = new Car();       // 기본 생성자 호출 못함            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
