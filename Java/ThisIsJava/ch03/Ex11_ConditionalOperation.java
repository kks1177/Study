// Ex11_ConditionalOperation.java
// 삼항(조건) 연산자 

package ThisIsJava.ch03;

public class Ex11_ConditionalOperation {
    public static void main(String[] args) {
        int score = 85;

        try {
            char grade = (score > 90) ? 'A' : ((score > 80)? 'B' : 'C');
            System.out.println(score + "점은 " + grade + "등급입니다.");            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
