// Ex5_EmptyString.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_EmptyString {
    public static void main(String[] args) {
        String hobby = "";
        
        try {
            if (hobby.equals("")) {
                System.out.println("hobby 변수가 참조하는 String 객체는 빈 문자열");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
