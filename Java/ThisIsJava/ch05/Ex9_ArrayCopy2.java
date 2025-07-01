// Ex9_ArrayCopy2.java
// 배열 복사

package ThisIsJava.ch05;

public class Ex9_ArrayCopy2 {
    public static void main(String[] args) {
        // 길이 3인 배열
        String[] oldStrArray = {"java", "array", "copy"};
        // 길이 5인 배열을 새로 생성
        String[] newStrArray = new String[5];
        // 배열 항목 복사
        System.arraycopy(oldStrArray, 0, newStrArray, 0, oldStrArray.length);
        // 배열 항목 출력
        for (int i=0; i<newStrArray.length; i++) {
            System.out.print(newStrArray[i] + ", ");
        }
    }
}
