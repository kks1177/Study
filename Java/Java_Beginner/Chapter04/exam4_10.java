// exam4_10.java
// 윤년 계산 프로그램

package Java_Beginner.Chapter04;

import java.util.Scanner;

public class exam4_10 {
    public static void main(String[] args) {
        int year = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("연도 입력 : "); 
            year = s.nextInt(); 

            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                System.out.printf("%d 년은 윤년입니다. \n", year); 
            else
                System.out.printf("%d 년은 윤년이 아닙니다. \n", year); 
        }
    }
}
