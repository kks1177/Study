// ex4_6.java
// 논리 연산자 사용 예 1

package Java_Beginner.Chapter04;

public class ex4_6 {
    public static void main(String[] args) {
        int a  = 99;

        try {
            System.out.printf(" AND 연산 : %s \n", (a >= 100) && (a <= 200));
            System.out.printf(" OR 연산 : %s \n", (a >= 100) || (a <= 200));
            System.out.printf(" NOT 연산 : %s \n", !(a == 100));
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}