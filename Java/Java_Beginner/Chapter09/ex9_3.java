// ex9_3.java
// startsWith(), endsWith() 사용 예

package Java_Beginner.Chapter09;

import java.util.Scanner;

public class ex9_3 {
    public static void main(String[] args) { 
        String str = "";

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.print("문자열 입력 ==> ");
            str = s.nextLine(); 

            System.out.print("출력 문자열 ==> ");

            if (!str.startsWith("("));
                System.out.print("(");

            for (int i=0; i<str.length(); i++)
                System.out.print(str.charAt(i));

            if (!str.endsWith(")"));
                System.out.printf(")"); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}