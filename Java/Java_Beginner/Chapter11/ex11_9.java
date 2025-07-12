// ex11_9.java
// 메소드 오버로딩 2

package Java.Java_Beginner.Chapter11;

class Calc {
    void addValue (double v1, double v2) {
        System.out.println("double 값 계산 ==> " + (v1 + v2));
    }
    void addValue (int v1, int v2) {
        System.out.println("int 값 계산 ==> " + (v1 + v2));
    }
}

public class ex11_9 {
    public static void main(String[] args) {
        Calc myCalc = new Calc();

        try {
            myCalc.addValue(1.0, 1.0);
            myCalc.addValue(1, 1);            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
