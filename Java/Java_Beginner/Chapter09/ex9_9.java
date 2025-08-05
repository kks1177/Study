// ex9_9.java
// ==와 equals()의 비교

package Java_Beginner.Chapter09;

public class ex9_9 {
    public static void main(String[] args) {
        String str1 = "Java Programming";
        String str2 = "Java Programming";
        String str3 = new String("Java Programming");

        try {
            System.out.println("원 문자열1 ==> [" + str1 + "]");
            System.out.println("원 문자열2 ==> [" + str2 + "]");
            System.out.println("원 문자열3 ==> [" + str3 + "]\n");

            System.out.println("문자열1==문자열2 결과 :\t " + (str1 == str2));
            System.out.println("문자열1.equals(문자열2) 결과 : " + str1.equals(str2));
            System.out.println("문자열1==문자열3 결과 :\t " + (str1 == str3));
            System.out.println("문자열1.equals(문자열3) 결과 : " + str1.equals(str3));
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}