// ex10_8.java
// System.in.read() 사용 예

package Java_Beginner.Chapter10;

import java.io.IOException;

public class ex10_8 {
    public static void main(String[] args) {
        String userName = "hanbit";
        String input = "";
        int key = 0;

        try {
            System.out.print("이름 ==> ");
            while ((key = System.in.read()) != 13) {
                input += Character.toString((char)key);
            }

            if (userName.equals(input))
                System.out.println(input + "님 어서오세요 ~~");
            else
                System.out.println(input + "님 등록이 안되었습니다 ~~");
        } catch (IOException e) {
            e.printStackTrace();
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}