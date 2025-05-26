// exam4_9.java
// 동전 교환 프로그램

package Java.Java_Beginner.Chapter04;

import java.util.Scanner;

public class exam4_9 {
    public static void main(String[] args) {
        int money = 0, c500 = 0, c100 = 0, c50 = 0, c10 = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.print(" ## 교환할 돈은 ? ");
            money = s.nextInt(); 

            c500 = money / 500;
            money %= 500;

            c100 = money / 100;
            money %= 100;

            c50 = money / 50;
            money %= 50;

            c10 = money / 10;
            money %= 10;

            System.out.printf("\n 오백원짜리 ==> %d개 \n", c500);
            System.out.printf(" 백원짜리 ==> %d개 \n", c100);
            System.out.printf(" 오십원짜리 ==> %d개 \n", c50);
            System.out.printf(" 십원짜리 ==> %d개 \n", c10);
            System.out.printf(" 바꾸지 못한 잔돈 ==> %d 원 \n", money);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }               
    }
}
