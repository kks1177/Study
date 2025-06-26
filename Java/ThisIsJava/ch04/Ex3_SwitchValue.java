// Ex3_SwitchValue.java
// Switch문

package ThisIsJava.ch04;

public class Ex3_SwitchValue {
    public static void main(String[] args) {
        String grade = "B";

        try {
            // Java 11 이전 문법
            int score1 = 0;
            switch (grade) {
                case "A":
                    score1 = 100;
                    break;
                case "B":
                    int result = 100 - 20;
                    score1 = result;
                    break;
                default:
                    score1 = 60;
            }
            System.out.println("score1 : " + score1);

            // Java 13부터 가능
            int score2 = switch(grade) {
                case "A" -> 100;
                case "B" -> {
                    int result = 100 - 20;
                    yield result;
                }
                default -> 60;
            };
            System.out.println("score2 : " + score2);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
