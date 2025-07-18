// Ex9_StringConcat.java
// 연산식에서 자동 타입 변환

package ThisIsJava.ch02;

public class Ex9_StringConcat {
    public static void main(String[] args) {
        // 숫자 연산
        int result1 = 10 + 2 + 8;
        System.out.println("result1 : " + result1);

        // 결합 연산
        String result2 = 10 + 2 + "8";
        System.out.println("result2 : " + result2);

        String result3 = 10 + "2" + 8;
        System.out.println("result3 : " + result3);

        String result4 = "10" + 2 + 8;
        System.out.println("result4 : " + result4);

        String result5 = "10" + (2+8);
        System.out.println("result5 : " + result5);
    }
}
