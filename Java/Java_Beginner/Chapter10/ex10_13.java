// ex10_13.java
// 파일을 이용한 출력 1

package Java.Java_Beginner.Chapter10;

import java.io.FileOutputStream;

public class ex10_13 {
    public static void main(String[] args) throws Exception {
        FileOutputStream fos = new FileOutputStream("C:/temp/data3.txt");
        int ch = 0;

        try {
            while ((ch = System.in.read()) != 13)
                fos.write((byte)ch);

            fos.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}