// exam9_23.java
// 입력된 문자열을 거꾸로 출력

package Java_Beginner.Chapter09;

import java.util.Scanner;

public class exam9_23 {
    public static void main(String[] args) {
        String ss;
        String tt = "";
        int count = 0, i = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("문자열을 입력하세요 : "); 
            ss = s.nextLine(); 

            count = ss.length();

            for (i=0; i<count; i++) {
                tt += ss.charAt(count-(i+1));
            }
            System.out.printf("내용을 거꾸로 출력 ==> %s \n", tt); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}