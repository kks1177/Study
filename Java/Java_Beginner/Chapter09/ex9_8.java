// ex9_8.java
// compareTo(), contains() 사용 예

package Java.Java_Beginner.Chapter09;

public class ex9_8 {
    public static void main(String[] args) {
        String str1 = "Java Programming";
        String str2 = "Java IT CookBook";

        try {
            System.out.println("원 문자열1 ==> [" + str1 + "]");
            System.out.println("원 문자열2 ==> [" + str2 + "]");

            System.out.println(str1.compareTo(str2));
            System.out.println(str1.contains("Java"));
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}