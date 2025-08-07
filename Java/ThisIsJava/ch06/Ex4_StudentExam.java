// Ex4_StudentExam.java
// 객체 생성과 클래스 변수

package ThisIsJava.ch06;

public class Ex4_StudentExam {
    public static void main(String[] args) {
        Ex4_Stuent s1 = new Ex4_Stuent();
        System.out.println("s1 변수가 Student 객체를 참조합니다.");
        System.out.println(s1);

        Ex4_Stuent s2 = new Ex4_Stuent();
        System.out.println("s2 변수가 또 다른 Student 객체를 참조합니다.");
        System.out.println(s2.hashCode());
    }
}
