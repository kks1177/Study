// ex9_7.java
// 모든 공백 없애기

package Java.Java_Beginner.Chapter09;

public class ex9_7 {
    public static void main(String[] args) {
        String str = "  한글  ABCD  efgh  ";
        String result = "";

        try {
            for (int i = 0; i<str.length(); i++) {
                if ( str.charAt(i) != ' ')
                    result += str.substring(i, i+1);
            }

            System.out.println("원 문자열 ==> [" + str + "]");
            System.out.println("공백제거  ==> [" + result + "]");
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}