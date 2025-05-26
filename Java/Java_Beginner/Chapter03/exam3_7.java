// exam3_7.java
// 입력된 문자열을 거꾸로 출력

package Java.Java_Beginner.Chapter03;

import java.util.Scanner;

public class exam3_7 {
    public static void main(String[] args) {
        String str = "";
        int i = 0;

        Scanner s = new Scanner(System.in);
        try (s) {
            System.out.print("문자열 입력 ==> ");
            str = s.nextLine();

            for (i=str.length()-1; i>=0; i--) {
                System.out.printf("%c", str.charAt(i));                
            }
            System.out.printf("\n");            
        }        
    }
}
