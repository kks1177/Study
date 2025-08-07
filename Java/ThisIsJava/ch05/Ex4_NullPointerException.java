// Ex4_NullPointerException.java
// null과 NUullPointerException

package ThisIsJava.ch05;

public class Ex4_NullPointerException {
    public static void main(String[] args) {
        int[] intArray = null;
        //intArray[0] = 10;

        String str = null;
        //System.out.println("총 문자 수 : " + str.length());     // NullPointerException

        System.out.println(intArray);
        System.out.println(str);
    }
}
