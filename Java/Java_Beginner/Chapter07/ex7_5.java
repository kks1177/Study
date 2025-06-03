// ex7_5.java
// do~while문 사용 예 1

package Java.Java_Beginner.Chapter07;

public class ex7_5 {
    public static void main(String[] args) {
        int a = 100;

        try {
            while (a == 200) {
                System.out.printf("while문 내부에 들어 왔습니다.");
            }
            do {
                System.out.printf("do~while문 내부에 들어 왔습니다."); 
            } while(a == 200);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}