// ex9_6.java 
// toUpperCase(), toLowerCase(), trim() 사용 예

package Java.Java_Beginner.Chapter09;

public class ex9_6 {
    public static void main(String[] args) {
        String str = "  한글  ABCD  efgh";

        try {
            System.out.println("원 문자열 ==> [" + str + "]");
            System.out.println("대문자로  ==> [" + str.toUpperCase() + "]"); 
            System.out.println("소문자로  ==> [" + str.toLowerCase() + "]");
            System.out.println("공백제거  ==> [" + str.trim() + "]");
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}