// ex9_1.java
// length() 메소드 사용 예 1

package Java_Beginner.Chapter09;

public class ex9_1 {
    public static void main(String[] args) {
        String str = "IT CookBook. Java";
        int len = 0;
        
        try {
            len = str.length();

            System.out.printf("문자열 : %s \n", str); 
            System.out.printf("문자열 길이 : %d", len); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}