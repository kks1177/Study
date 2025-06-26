// Ex6_DoWhile.java
// do-while문

package ThisIsJava.ch04;

import java.util.Scanner;

public class Ex6_DoWhile {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String inputString = "";

        System.out.println("메시지 입력하세요. ");
        System.out.println("프로그램을 종료하려면 q를 입력하세요.");

        try(scanner) {
            do {
                System.out.print(">");
                inputString = scanner.nextLine(); 
                System.out.println(inputString);
            } while (!inputString.equals("q"));
            System.out.println();
            System.out.println("프로그램 종료");
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}