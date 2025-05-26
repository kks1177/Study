// ex5_9.java
// switch~case문 사용 예 1

package Java.Java_Beginner.Chapter05;

import java.util.Scanner;

public class ex5_9 {
    public static void main(String[] args) {
        int a = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("1~4중에 선택 : ");
            a = s.nextInt(); 

            switch(a) {
                case 1:
                    System.out.printf("1을 선택\n"); 
                    break;
                case 2:
                    System.out.printf("2를 선택\n"); 
                    break;
                case 3:
                    System.out.printf("3을 선택\n"); 
                    break;
                case 4:
                    System.out.printf("4를 선택\n"); 
                    break;
                default:
                    System.out.printf("이상한걸 선택했다. \n"); 
            }
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}