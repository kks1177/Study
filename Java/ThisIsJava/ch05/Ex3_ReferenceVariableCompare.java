// Chapter05 참조 타입
// Ex3_ReferenceVariableCompare.java
// 참조 타입 변수의 ==, != 연산

package ThisIsJava.ch05;

public class Ex3_ReferenceVariableCompare {
    public static void main(String[] args) {
        int[] arr1 = {0}, arr2 = {0}, arr3 = {0};

        try {
            arr1 = new int[] {1, 2, 3};
            arr2 = new int[] {1, 2, 3};
            arr3 = arr2;

            System.out.println(arr1 == arr2);
            System.out.println(arr2 == arr3);
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
