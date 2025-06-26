// Ex5_SubString.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_SubString {
    public static void main(String[] args) {
        String ssn = "880815-1234567";

        try {
            String firstNum = ssn.substring(0, 6);
            System.out.println(firstNum);
             
            String secondNum = ssn.substring(7);
            System.out.println(secondNum);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}