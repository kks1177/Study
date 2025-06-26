// Ex5_InfinityAndCheck.java
// 나눗셈 연산 후 NaN과 Infinity 처리

package ThisIsJava.ch03;

public class Ex5_InfinityAndCheck {
    public static void main(String[] args) {
        int x = 5; 
        double y = 0.0;
        double z = x / y;
        //double z = x % y;

        try {
            // 잘못된 코드
            System.out.println(z + 2);
    
            // 알맞은 코드
            if (Double.isInfinite(z) || Double.isNaN(z)) {
                System.out.println("값 산출 불가");
            } else {
                System.out.println(z + 2);
            }            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
