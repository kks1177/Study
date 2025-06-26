// Ex5_Equals.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_Equals {
    public static void main(String[] args) {
        String strVar1 = "홍길동";
        String strVar2 = "홍길동";

        try {
            if (strVar1 == strVar2) {
                System.out.println("StrVar1과 strVar2는 참조가 같음");
            } else {
                System.out.println("strVar1과 strVar2는 참조가 다름");
            }

            if (strVar1.equals(strVar2)) {
                System.out.println("strVar1과 strVar2는 문자열이 같음");
            }

            String strVar3 = new String("홍길동");
            String strVar4 = new String("홍길동");

            if (strVar3 == strVar4) {
                System.out.println("StrVar3과 strVar4는 참조가 같음");
            } else {
                System.out.println("strVar3과 strVar4는 참조가 다름");
            }

            if (strVar3.equals(strVar4)) {
                System.out.println("strVar3과 strVar4는 문자열이 같음");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
