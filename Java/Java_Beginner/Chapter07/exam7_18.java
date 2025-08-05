// exam7_18.java
// 입력한 문자열의 종류 구분

package Java_Beginner.Chapter07;

import java.util.Scanner;

public class exam7_18 {
    public static void main(String[] args) {
        String str = "";
        char ch = '\0';
        int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
        int i = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("문자열 입력 : "); 
            str = s.nextLine(); 

            i = 0;
            do {
                ch = str.charAt(i);

                if (ch >= 'A' && ch <= 'Z')
                    upper_cnt++;  
                if (ch >= 'a' && ch <= 'z')
                    lower_cnt++;
                if (ch >= '0' && ch <= '9')
                    digit_cnt++;
                
                i++;
            } while (i <str.length());

            System.out.printf("대문자 %d개, 소문자 %d개, 숫자 %d개 \n", upper_cnt, lower_cnt, digit_cnt); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}