// exam9_24.java
// 대문자와 소문자의 변환

package Java_Beginner.Chapter09;

import java.util.Scanner;

public class exam9_24 {
    public static void main(String[] args) {
        String in = "", out = "";
        char ch = '\0';
        int count = 0, i = 0;
        int diff = 'a' - 'A';

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("문자열 입력 : "); 
            in = s.nextLine(); 

            count = in.length();

            for (i=0; i<count; i++) {
                ch = in.charAt(i);
                if (('A' <= ch) && (ch <= 'Z'))
                    out += (char) (ch+diff);
                else if(('a' <= ch) && (ch <= 'Z'))
                    out += (char) (ch-diff);
                else
                    out += (char) ch;
            }

            System.out.printf("변환된 문자열 ==> %s \n", out); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}