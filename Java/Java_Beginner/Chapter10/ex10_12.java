// ex10_12.java
// Scanner를 이용한 입력

package Java_Beginner.Chapter10;

import java.io.File;
import java.util.Scanner;

public class ex10_12 {
    public static void main(String[] args) throws Exception {
        int hap = 0;

        Scanner sc = new Scanner(new File("C:/temp/data2.txt"));
        try(sc) {
            while (sc.hasNextLine())
                hap += sc.nextInt();

            System.out.println("합계 : " + hap);
            sc.close(); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}