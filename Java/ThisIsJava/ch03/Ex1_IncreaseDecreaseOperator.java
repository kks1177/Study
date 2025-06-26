// Ex1_IncreaseDecreaseOperator.java
// 부호/증감 연산자

package ThisIsJava.ch03;

public class Ex1_IncreaseDecreaseOperator {
    public static void main(String[] args) {
        int x = 10, y = 10, z = 0;

        try {
            x++;
            ++x;
            System.out.println("x = " + x);
    
            System.out.println("------------------");
            y--;
            --y;
            System.out.println("y = " + y);
    
            System.out.println("------------------");
            z = x++;
            System.out.println("z = " + z);
            System.out.println("x = " + x);
    
            System.out.println("------------------");
            z = ++x;
            System.out.println("z = " + z);
            System.out.println("x = " + x);
    
            System.out.println("------------------");
            z = ++x + y++;
            
            System.out.println("z = " + z);
            System.out.println("x = " + x);
            System.out.println("y = " + y);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
