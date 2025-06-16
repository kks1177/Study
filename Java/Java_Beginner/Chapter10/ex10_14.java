// ex10_14.java
// 파일을 이용한 출력 2

package Java.Java_Beginner.Chapter10;

import java.io.FileWriter;
import java.util.Scanner;

public class ex10_14 {
    public static void main(String[] args) throws Exception {
        String str = "";
        FileWriter fw = new FileWriter("C:/temp/data4.txt");
        
        Scanner sc = new Scanner(System.in);
        try(sc) {
            while (!(str = sc.nextLine()).equals(""))
                fw.write(str + "\r\n");

            fw.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}