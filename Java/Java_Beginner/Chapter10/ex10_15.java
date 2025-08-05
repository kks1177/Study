// ex10_15.java
// 파일을 이용한 출력 3

package Java_Beginner.Chapter10;

import java.io.FileInputStream;
import java.io.FileOutputStream;

public class ex10_15 {
    public static void main(String[] args) throws Exception {
        FileInputStream fis = new FileInputStream("C:/Windows/win.ini");
        FileOutputStream fos = new FileOutputStream("C:/temp/data5.txt");
        int ch = 0;

        try {
            while ((ch = fis.read()) != -1)
                fos.write((byte)ch);

            System.out.println("복사 완료!");
            fis.close();
            fos.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}