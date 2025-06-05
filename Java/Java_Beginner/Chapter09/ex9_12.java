// ex9_12.java
// 여러 명의 주문을 받도록 [실습9-11] 변경하기

package Java.Java_Beginner.Chapter09; 

import java.util.Scanner;

public class ex9_12 {  
    static int coffee_machine(int button) {
        System.out.printf("\n # 1.(자동으로) 뜨거운 물을 준비\n"); 
        System.out.printf("# 2.(자동으로) 종이컵 준비\n"); 

        switch (button) {
            case 1:
                System.out.printf("# 3.(자동으로) 보통커피를 탄다\n");  break;
            case 2:
                System.out.printf("# 3.(자동으로) 설탕커피를 탄다\n");    break;
            case 3:
                System.out.printf("# 3.(자동으로) 블랙커피를 탄다\n");    break;
            default:
                System.out.printf("# 3.(자동으로) 아무거나 탄다\n");      break;
        }

        System.out.printf("# 4.(자동으로) 물을 붓는다\n"); 
        System.out.printf("# 5.(자동으로) 스푼으로 저어서 녹인다\n\n"); 

        return 0;
    }
    public static void main(String[] args) {
        int coffee = 0;

        Scanner s = new Scanner(System.in);
        try(s) {
            System.out.printf("A님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");     
            coffee = s.nextInt(); 
            coffee_machine(coffee);
            System.out.printf("A님 커피 여기 있습니다. \n"); 

            System.out.printf("B님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");     
            coffee = s.nextInt(); 
            coffee_machine(coffee);
            System.out.printf(" B님 커피 여기 있습니다. \n"); 

            System.out.printf("C님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");     
            coffee = s.nextInt(); 
            coffee_machine(coffee);
            System.out.printf("C님 커피 여기 있습니다. \n"); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}