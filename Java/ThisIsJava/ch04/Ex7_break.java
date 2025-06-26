// Ex7_break.java
// break문

package ThisIsJava.ch04;

public class Ex7_break {
    public static void main(String[] args) {
        try {
            while (true) {
                int num = (int)(Math.random()*6) + 1;
                System.out.println(num);
                if (num == 6) {
                    break;
                }
            }
            System.out.println("프로그램 종료");
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
