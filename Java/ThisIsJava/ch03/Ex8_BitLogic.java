// Ex8_BitLogic.java
// 비트 논리 연산자

package ThisIsJava.ch03;

public class Ex8_BitLogic {
    public static void main(String[] args) {
        System.out.println("45 & 25 = " + (45 & 25));
        System.out.println("45 | 25 = " + (45 | 25));
        System.out.println("45 ^ 25 = " + (45 ^ 25));
        System.out.println("~45 = " + (~45));
        System.out.println("---------------------------------");

        byte receiveData = -120;

        try {
            // 방법 1 : 비트 논리곱 연산으로 Unsigned 정수 얻기
            int  unsignedInt1 = receiveData & 255;
            System.out.println(unsignedInt1);

            // 방법 2 : 자바 API를 이용해서 Unsigned 정수 얻기
            int unsignedInt2 = Byte.toUnsignedInt(receiveData);
            System.out.println(unsignedInt2);

            int test = 136;
            byte btest = (byte) test;
            System.out.println(btest);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
