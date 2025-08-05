// ex3_15.java
// 문자열 사용 예

package Java_Beginner.Chapter03;

public class ex3_15 {
    public static void main(String[] args) {
        String str1 = "IT CookBook 입니다.";
        String str2 = "10";
        String str3 = "20";

        try {
            str1 = "Java 입니다.";

            System.out.printf("%s \n", str1);
            System.out.printf("%s \n", str2 + str3);
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}