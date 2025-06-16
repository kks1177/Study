// ex10_10.java
// 파일을 이용한 입력 2

package Java.Java_Beginner.Chapter10;

import java.io.FileInputStream;

public class ex10_10 {
    public static void main(String[] args) throws Exception {
        FileInputStream fis = new FileInputStream("C:/temp/data1.txt");
        int ch = 0;
        byte bt[] = new byte[1024];
        int i = 0;

        try {
            while((ch = fis.read()) != -1) {
                bt[i] = (byte)ch;
                i++;
            }

            System.out.print(new String(bt));
            fis.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}