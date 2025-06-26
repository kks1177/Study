// Ex5_Char.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_Char {
    public static void main(String[] args) {
        String ssn = "9506241230123";
        char sex = ssn.charAt(6);

        try {
            switch(sex) {
                case '1':
                case '3':
                    System.out.println("남자입니다.");
                    break;
                case '2':
                case '4':
                    System.out.println("여자입니다.");
                    break;
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
