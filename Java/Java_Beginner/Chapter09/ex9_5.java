// ex9_5.java
// 문자열 처리 메소드 활용 예

package Java_Beginner.Chapter09;

import java.util.Scanner;

public class ex9_5 {
    public static void main(String[] args) {
        String str = "", strRep = "", strSub = "", strAry[] = {};
        
        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.print("문자열 입력 : ");
            str = s.nextLine(); 

            strRep = str.replace(" ", "$");
            strSub = str.substring(3, 8);
            strAry = str.split(" ");

            System.out.println("\n입력 문자열 ==> " + str);
            System.out.println("바꾼 문자열 ==> " + strRep);
            System.out.println("일부 문자열 ==> " + strSub);

            for (int i=0; i<strAry.length; i++) 
                System.out.println("분리한 문자열" + i + "==> " + strAry[i]);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}