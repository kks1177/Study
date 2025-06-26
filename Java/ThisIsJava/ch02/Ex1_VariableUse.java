// Ex1_VariableUse.java
// 변수 선언

package ThisIsJava.ch02;

public class Ex1_VariableUse {
    public static void main(String[] args) {
        int hour = 3, minute = 5;

        System.out.println(hour + "시간 " + minute + "분");

        int totalMinute = (hour*60) + minute;
        System.out.println("총 " + totalMinute + "분");
    }
}
