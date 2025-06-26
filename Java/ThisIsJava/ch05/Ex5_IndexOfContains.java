// Ex5_IndexOfContains.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_IndexOfContains {
    public static void main(String[] args) {
        String subject = "자바 프로그래밍";

        try {
            int location = subject.indexOf("프로그래밍");
            System.out.println(location);
            String substring = subject.substring(location);
            System.out.println(substring);

            location = subject.indexOf("자바");
            if (location != -1) {
                System.out.println("자바와 관련된 책이군요.");
            } else {
                System.out.println("자바와 관련 없는 책이군요.");
            }

            boolean result = subject.contains("자바");
            if (result) {
                System.out.println("자바와 관련된 책이군요.");
            } else {
                System.out.println("자바와 관련 없는 책이군요.");
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
