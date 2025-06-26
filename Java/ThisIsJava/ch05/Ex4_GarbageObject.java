// Ex4_GarbageObject.java
// null과 NullPointerException

package ThisIsJava.ch05;

public class Ex4_GarbageObject {
    public static void main(String[] args) {
        String hobby = "여행";
        hobby = null;       // "여행"에 해당하는 String 객체를 쓰레기로 만듦

        try {
            String kind1 = "자동차";
            String kind2 = kind1;       // kind1 변수에 저장되어 있는 번지를 kind2에 대임
            kind1 = null;               // "자동차"에 해당하는 String 객체는 쓰레기가 아님
            System.out.println("kind2 : " + kind2);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
