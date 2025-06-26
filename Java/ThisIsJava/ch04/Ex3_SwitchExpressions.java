// Ex3_SwitchExpressions.java
// Switch문

package ThisIsJava.ch04;

public class Ex3_SwitchExpressions {
    public static void main(String[] args) {
        char grade = 'B';

        try {
            switch (grade) {
                case 'A', 'a' -> {
                    System.out.println("우수 회원입니다.");
                }
                case 'B', 'b' -> {
                    System.out.println("일반 회원입니다.");
                }
                default -> {
                    System.out.println("손님입니다.");
                }
            }

            switch(grade) {
                case 'A', 'a' -> System.out.println("우수 회원입니다.");
                case 'B', 'b' -> System.out.println("일반 회원입니다.");
                default -> System.out.println("손님입니다.");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
