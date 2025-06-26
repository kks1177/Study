// Ex13_Scanner.java
// 키보드 입력 데이터를 변수에 저장

package ThisIsJava.ch02;

import java.util.Scanner;

public class Ex13_Scanner {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try(scanner) {
            System.out.print("x 값 입력 : ");
            String strX = scanner.nextLine();
            int x = Integer.parseInt(strX);

            System.out.print("y 갑 입력 : ");
            String strY = scanner.nextLine();
            int y = Integer.parseInt(strY);

            int result = x + y;
            System.out.println("x + y : " + result);
            System.out.println();

            while(true) {
                System.out.println("입력 문자열 : ");
                String data = scanner.nextLine();
                if(data.equals("q")) {
                    break;
                }
                System.out.println("출력 문자열 : " + data);
                System.out.println();
            }
            System.out.println("종료");
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
