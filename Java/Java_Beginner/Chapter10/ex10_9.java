// ex10_9.java
// 파일을 이용한 입력 1

package Java_Beginner.Chapter10;

import java.io.FileInputStream;

public class ex10_9 {
    public static void main(String[] args) throws Exception {
        FileInputStream fis = new FileInputStream("C:/temp/data1.txt");
        int ch = 0;

        try {
            while ((ch=fis.read()) != -1)
                System.out.print((char)ch);

            fis.close();
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}