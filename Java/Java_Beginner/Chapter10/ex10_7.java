// ex10_7.java
// next()의 작동 예 

package Java.Java_Beginner.Chapter10;

import java.util.Scanner;

public class ex10_7 {
    public static void main(String[] args) {
        String str1 = "", str2 = "", str3 = "";

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.print("단어 3개 입력 : ");
            str1 = s.next(); 
            str2 = s.next();
            str3 = s.next();

            System.out.print("입력된 문자열 ==> ");
            System.out.print(str1 + ", " + str2 + ", " + str3);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}