// Ex8_ArrayReferenceObject.java
// 객체를 참조하는 배열 

package ThisIsJava.ch05;

public class Ex8_ArrayReferenceObject {
    public static void main(String[] args) {
        String[] strArray = new String[3];
        strArray[0] = "Java";
        strArray[1] = "Java";
        strArray[2] = new String("Java");

        try {
            System.out.println(strArray[0] == strArray[1]);         // true
            System.out.println(strArray[0] == strArray[2]);         // true
            System.out.println(strArray[0].equals(strArray[2]));    // true
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
