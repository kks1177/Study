// Ex11_MainStringArrayArgument.java
// main() 메소드의 String[] 매개변수 용도

package ThisIsJava.ch05;

public class Ex11_MainStringArrayArgument {
    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("프로그램 입력값이 부족");
            System.exit(0);
        }

        String strNum1 = args[0];
        String strNum2 = args[1];

        int num1 = Integer.parseInt(strNum1);
        int num2 = Integer.parseInt(strNum2);

        try {
            int result = num1 + num2;
            System.out.println(num1 + " + " + num2 + " = " + result);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}