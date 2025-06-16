// exam10_28.java
// 파일에서 읽어온 문자열을 파일에 거꾸로 출력

package Java.Java_Beginner.Chapter10;

import java.io.File;
import java.io.PrintWriter;
import java.util.Scanner;

public class exam10_28 {
    public static void main(String[] args) throws Exception {
        PrintWriter pw = new PrintWriter("C:/temp/out.txt");
        String str1 = "", str2 = "";

        Scanner sc = new Scanner(System.in);
        try(sc) {
            while (sc.hasNextLine()) {
                str1 = sc.nextLine();
                int size = str1.length();
                
                for (int i = size-1; i>=0; i--) 
                    str2 += str1.charAt(i);

                pw.println(str2);
                str2 = "";
            }
            sc.close();
            pw.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}