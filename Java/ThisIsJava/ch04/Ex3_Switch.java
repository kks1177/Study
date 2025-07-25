// Ex3_Switch.java
// Switch문

package ThisIsJava.ch04;

public class Ex3_Switch {
    public static void main(String[] args) {
        int num = (int)(Math.random()*6) + 1;

        try {
            switch(num) {
                case 1:
                    System.out.println("1번이 나왔습니다.");
                    break;
                case 2:
                    System.out.println("2번이 나왔습니다.");
                    break;
                case 3:
                    System.out.println("3번이 나왔습니다.");
                    break;
                case 4:
                    System.out.println("4번이 나왔습니다.");
                    break;
                case 5:
                    System.out.println("5번이 나왔습니다.");
                    break;
                default:
                    System.out.println("6번이 나왔습니다.");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
