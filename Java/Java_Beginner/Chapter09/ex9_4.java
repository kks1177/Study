// ex9_4.java
// indexOf(), lastIndexOf() 사용 예

package Java.Java_Beginner.Chapter09;

public class ex9_4 {
    public static void main(String[] args) {
        String str = "Java를 공부하는 중, Java는 재밌어요. ^^";
        try {
            System.out.println("문자열 ==> " + str);

            System.out.print("제일 처음 나오는 Java 위치 ==> ");
            System.out.println(str.indexOf("Java"));
            System.out.print("마지막에 나오는 Java 위치 ==> ");
            System.out.println(str.lastIndexOf("Java"));
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}