// Ex10_Television.java
// 정적 멤버

package ThisIsJava.ch06;

public class Ex10_Television {
    static String company = "MyCompany";
    static String model = "LCD";
    static String info;

    static {
        info = company + "-" + model;
    }
}
