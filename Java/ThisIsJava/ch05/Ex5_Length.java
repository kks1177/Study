// Ex5_Length.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_Length {
    public static void main(String[] args) {
        String ssn = "9506241230123";
        int length = ssn.length();

        try {
            if (length == 13) {
                System.out.println("주민등록번호 자릿수가 맞습니다.");
            } else {
                System.out.println("주민등록번호 자릿수가 틀립니다.");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
