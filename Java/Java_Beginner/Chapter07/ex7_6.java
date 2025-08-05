// ex7_6.java
// do~while문 사용 예 2

package Java_Beginner.Chapter07;

import java.util.Scanner;

public class ex7_6 {
    public static void main(String[] args) {
        int menu = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            do {
                System.out.printf("\n 손님 주문하시겠습니까? \n");
                System.out.printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4> 그만시킬래요 => "); 

                menu = s.nextInt(); 
                switch (menu) {
                    case 1:
                        System.out.printf("#카페라떼 주문하셨습니다. \n");      break;
                    case 2:
                        System.out.printf("#카푸치노 주문하셨습니다. \n");      break;
                    case 3:
                        System.out.printf("#아메리카노 주문하셨습니다. \n");      break;
                    case 4:
                        System.out.printf("#주문하신 커피 준비하겠습니다. \n");      break;
                    default:
                        System.out.printf("잘못 주문하셨습니다."); 
                }
            } while(menu != 4);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
