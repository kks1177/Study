// ex3_14.java
// 불형 사용 예

package Java_Beginner.Chapter03;

public class ex3_14 {
    public static void main(String[] args) {
        boolean boo1, boo2;

        try {
            boo1 = true;
            System.out.printf("%s \n", boo1);
            
            boo2 = (10 == 20);
            System.out.printf("%s \n", boo2);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
