// ex10_11.java
// 파일을 이용한 입력 3

package Java_Beginner.Chapter10;

import java.io.BufferedReader;
import java.io.FileReader;

public class ex10_11 {
    public static void main(String[] args) throws Exception {
        FileReader fReader = new FileReader("c:/Windows/win.ini");
        BufferedReader bReader = new BufferedReader(fReader);
        String str = null;

        try {
            while ((str = bReader.readLine()) != null) {
                System.out.println(str);
            }
            
            bReader.close();
            fReader.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}