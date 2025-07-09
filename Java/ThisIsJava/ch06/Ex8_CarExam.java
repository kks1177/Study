// Ex8_CarExam.java
// 메소드 선언과 호출 - return문

package ThisIsJava.ch06;

public class Ex8_CarExam {
    public static void main(String[] args) {
        // Car 객체 생성
        Ex8_Car myCar = new Ex8_Car();

        // 리턴값이 없는 setGas() 메소드 호출
        myCar.setGas(5);

        try {
            // isLeftGas() 메소드를 호출해서 받은 리턴값이 true일 경우 if 블록 실행
            if (myCar.isLeftGas()) {
                System.out.println("출발합니다.");
    
                // 리턴값이 없는 run() 메소드 호출
                myCar.run();
            }
    
            System.out.println("gas를 주입하세요.");            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
