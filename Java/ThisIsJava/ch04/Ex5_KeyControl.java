// Ex5_KeyControl.java
// while문

package ThisIsJava.ch04;

import java.util.Scanner;

public class Ex5_KeyControl {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean run = true;
        int speed = 0;
        
        try(scanner) {
            while(run) {
                System.out.println("--------------------------------");
                System.out.println("1. 증속 | 2. 감속 | 3. 중지");
                System.out.println("--------------------------------");
                System.out.print("선택 : ");

                String strNum = scanner.nextLine(); 

                if (strNum.equals("1")) {
                    speed++;
                    System.out.println("현재 속도 = " + speed);
                } else if (strNum.equals("2")) {
                    speed--;
                    System.out.println("현재 속도 = " + speed);
                } else if (strNum.equals("3")) {
                    run = false;
                }
            }
            System.out.println("프로그램 종료");
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
