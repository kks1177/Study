// Ex7_BreakOutter.java
// break문

package ThisIsJava.ch04;

public class Ex7_BreakOutter {
    public static void main(String[] args) {
        Outter:for(char upper='A'; upper<='Z'; upper++) {
            for(char lower='a'; lower<='z'; lower++) {
                System.out.println(upper + "-" + lower);
                if (lower == 'g') {
                    break Outter;
                }
            }
        }
        System.out.println("프로그램 실행 종료");
    }
}
