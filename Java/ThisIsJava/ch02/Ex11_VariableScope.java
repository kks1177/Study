// Ex11_VariableScope.java
// 변수 사용 범위

package ThisIsJava.ch02;

public class Ex11_VariableScope {
    public static void main(String[] args) {
        int v1 = 15;

        try {
            if (v1 > 10) {
                int v2 = v1 - 10;
            }
            //int v3 = v1 + v2 + 5;       // error..            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
