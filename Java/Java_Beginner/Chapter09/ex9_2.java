// ex9_2.java
// length() 메소드 사용 예 2

package Java.Java_Beginner.Chapter09;

import java.util.Scanner;

public class ex9_2 {
    public static void main(String[] args) {
        String str = "";

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.print("문자열 입력 ==> ");
            str = s.nextLine(); 

            System.out.print("출력 문자열 ==> ");
            for (int i=0; i<str.length(); i++) { 
                if (str.charAt(i) == 'o')
                    System.out.print('$');
                else
                    System.out.print(str.charAt(i));
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}