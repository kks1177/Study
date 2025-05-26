// ex5_10.java
// switch~case문 사용 예 2

package Java.Java_Beginner.Chapter05;

import java.util.Scanner;

public class ex5_10 {
    public static void main(String[] args) {
        int year = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("출생연도 입력 : "); 
            year = s.nextInt(); 

            switch (year % 12) {
                case 0: System.out.printf("원숭이띠 \n");   break;
                case 1: System.out.printf("닭띠 \n");   break;
                case 2: System.out.printf("개띠 \n");   break;
                case 3: System.out.printf("돼지띠 \n");   break;
                case 4: System.out.printf("쥐띠 \n");   break;
                case 5: System.out.printf("소띠 \n");   break;
                case 6: System.out.printf("호랑이띠 \n");   break;
                case 7: System.out.printf("토끼띠 \n");   break;
                case 8: System.out.printf("용띠 \n");   break;
                case 9: System.out.printf("뱀띠 \n");   break;
                case 10: System.out.printf("말띠 \n");   break;
                case 11: System.out.printf("양띠 \n");   break;
            }
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}