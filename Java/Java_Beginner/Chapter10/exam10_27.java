// exam10_27.java
// 구구단을 파일에 출력

package Java_Beginner.Chapter10;

import java.io.PrintWriter;

public class exam10_27 {
    public static void main(String[] args) throws Exception {
        int i = 0, k = 0;

        PrintWriter pw = new PrintWriter("C:/temp/gugu.txt");
        String str = "";

        try {
            for (i=2; i<=9; i++)
                str += " #제" + i + "단#";

            pw.println(str);
            pw.println();
            str = "";

            for(i=1; i<=9; i++) {
                for (k=2; k<=9; k++) {
                    str += String.format("%2dX%2d=%2d", k, i, k*i);
                }
                pw.println(str);
                str = "";
            }
            pw.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}