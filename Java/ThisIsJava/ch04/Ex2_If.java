// Chapter04 조건문과 반복문
// Ex2_If.java
// if문

package ThisIsJava.ch04;

public class Ex2_If {
    public static void main(String[] args) {
        int score = 93;

        try {
            if (score >= 90) {
                System.out.println("점수가 90보다 큽니다.");
                System.out.println("등급은 A입니다.");
            }
            if (score < 90) {
                System.out.println("점수가 90보다 작습니다.");
                System.out.println("등급은 B입니다.");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
