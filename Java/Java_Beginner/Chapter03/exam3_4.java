// exam3_4.java
// 정수형을 출력하는 프로그램

package Java.Java_Beginner.Chapter03;

import java.util.Scanner;

public class exam3_4 {
    public static void main(String[] args) {
        int data = 0;
        
        Scanner s = new Scanner(System.in);
        try (s) {
            System.out.print("정수 입력 ==> ");
            data = s.nextInt();

            System.out.printf("10진수 ==> %d \n", data);
            System.out.printf("16진수 ==> %X \n", data);
            System.out.printf("8진수 ==> %o \n", data);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}