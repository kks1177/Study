// Ex5_Replace.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_Replace {
    public static void main(String[] args) {
        String oldStr = "자바 문자열은 불변입니다. 자바 문자열은 String입니다.";
        String newStr = oldStr.replace("자바", "Java");

        try {
            System.out.println(oldStr);
            System.out.println(newStr);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
