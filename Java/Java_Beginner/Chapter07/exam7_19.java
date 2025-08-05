// exam7_19.java
// 입력한 숫자만큼 별표 출력

package Java_Beginner.Chapter07;

import java.util.Scanner;

public class exam7_19 {
    public static void main(String[] args) {
        String str = "";
        char ch = '\0';
        int i = 0, k = 0;
        int star = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("숫자 여러개 입력 : "); 
            str = s.nextLine(); 
            
            ch = str.charAt(i);
            while(true) {
                star = (int)ch - 48;

                for (k=0; k<star; k++) {
                    System.out.printf("*"); 
                }
                System.out.printf("\n"); 

                if (++i > str.length()-1)
                    break;
                ch = str.charAt(i);
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}