// exam6_16.java
// 입력된 문자를 거꾸로 출력

package Java_Beginner.Chapter06;

import java.util.Scanner;

public class exam6_16 {
    public static void main(String[] args) {
        String str = "";
        int str_cnt = 0, i = 0;
        
        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("글자 입력 : "); 
            str = s.nextLine(); 

            System.out.printf("\n"); 
            System.out.printf("입력한 문자열 ==> %s \n", str);
            System.out.printf("변환된 문자열 ==> "); 

            str_cnt = str.length();

            for (i=str_cnt-1; i>=0; i--) {
                System.out.printf("%c", str.charAt(i)); 
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
