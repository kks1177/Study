// Ex2_IfElseIfElse.java
// if문

package ThisIsJava.ch04;

public class Ex2_IfElseIfElse {
    public static void main(String[] args) {
        int score = 75;

        try {
            if (score >=90) {
                System.out.println("점수가 100~90입니다.");
                System.out.println("등급은 A입니다.");
            } else if (score >= 80) {
                System.out.println("점수가 80~89입니다.");
                System.out.println("등급은 B입니다.");
            } else if (score >= 70) {
                System.out.println("점수가 70~79입니다.");
                System.out.println("등급은 C입니다.");
            } else {
                System.out.println("점수가 70미만입니다.");
                System.out.println("등급은 D입니다.");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
