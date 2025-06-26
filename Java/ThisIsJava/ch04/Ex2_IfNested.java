// Ex2_IfNested.java
// if문

package ThisIsJava.ch04;

public class Ex2_IfNested {
    public static void main(String[] args) {
        int score = (int)(Math.random()*20) + 81;
        String grade = "";

        System.out.println("점수 : " + score);

        try {
            if (score >= 90) {
                if (score >= 95) {
                    grade = "A+";
                } else {
                    grade = "A";
                } 
            }else {
                if (score >= 85) {
                    grade = "B+";
                } else {
                    grade = "B";
                }
            }
            System.out.println("학점 : " + grade);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
