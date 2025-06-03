// ex8_11.java
// 스택 구현 1

package Java.Java_Beginner.Chapter08;

public class ex8_11 {
    public static void main(String[] args) {
        char[] stack = new char[5];
        int top = 0;

        try {
            stack[top] = 'A';
            System.out.printf(" %c 자동차가 터널에 들어감 \n", stack[top]); 
            top++;
            stack[top] = 'B';
            System.out.printf(" %c 자동차가 터널에 들어감 \n", stack[top]); 
            top++;        
            stack[top] = 'C';
            System.out.printf(" %c 자동차가 터널에 들어감 \n", stack[top]); 
            top++;

            System.out.printf("\n"); 

            top--;
            System.out.printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]); 
            stack[top] = ' ';
            top--;
            System.out.printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]); 
            stack[top] = ' ';
            top--;
            System.out.printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]); 
            stack[top] = ' ';
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}