// Ex3_SwitchNoBreakCase.java
// Switch문

package ThisIsJava.ch04;

public class Ex3_SwitchNoBreakCase {
    public static void main(String[] args) {
        int time = (int)(Math.random()*4) + 8;
        System.out.println("[현재 시간 : " + time + "시]");

        try {
            switch(time) {
                case 8:
                    System.out.println("출근합니다.");
                case 9: 
                    System.out.println("회의를 합니다.");
                case 10:
                    System.out.println("업무를 봅니다.");
                case 11:
                    System.out.println("외근을 나갑니다.");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
