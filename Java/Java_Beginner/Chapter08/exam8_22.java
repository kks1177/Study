// exam8_22.java
// 배열을 활용한 큐

package Java_Beginner.Chapter08;

import java.util.Scanner;

public class exam8_22 {
    public static void main(String[] args) {
        char[] queue = new char[5];
        int rear = 0;  
        char carName = 'A';
        int select = 9;

        Scanner s = new Scanner(System.in);
        try(s) {
            while (select != 3) {
                System.out.printf("<1>자동차 넣기 <2>자동차 빼기 <3>끝 : "); 
                select = s.nextInt(); 

                switch (select) {
                    case 1:
                        if (rear >= 5) {
                            System.out.printf("터널이 꽉 차서 차가 못 들어감 \n"); 
                        } else {
                            queue[rear] = carName++;
                            System.out.printf(" %c 자동차가 터널에 들어감 \n", queue[rear]); 
                            rear++;
                        }
                        break;
                    case 2:
                        if (rear <= 0) {
                            System.out.printf("빠져나갈 자동차가 없음 \n"); 
                        } else {
                            System.out.printf(" %c 자동차가 터널에서 빠짐 \n", queue[0]); 
                            for (int i = 0; i < 4; i++)
                                queue[i] = queue[i+1];  
                            rear--;
                        }
                        break;
                    case 3:
                        System.out.printf("현재 터널에 %d대가 있음 \n", rear); 
                        System.out.printf("프로그램을 종료합니다. \n"); 
                        break;
                    default:
                        System.out.printf("잘못 입력했습니다. 다시 입력하세요. \n"); 
                }
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
