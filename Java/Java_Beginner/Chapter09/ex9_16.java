// ex9_16.java
// 반환 값 유무에 따른 메소드 비교

package Java_Beginner.Chapter09;

public class ex9_16 {
    static void func1() {
        System.out.printf("void 형 메소드는 돌려줄 게 없음 \n"); 
    }
    static int func2() {
        return 100;
    }
    public static void main(String[] args) {
        int a = 0;

        try {
            func1();

            a = func2();
            System.out.printf("int 형 메소드에서 돌려준 값 ==> %d \n", a); 
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}