// ex3_5.java
// 다양한 서식 활용 예 1

package Java_Beginner.Chapter03;

public class ex3_5 {
    public static void main(String[] args) {
        try {
            System.out.printf("%d\n", 123);
            System.out.printf("%5d\n", 123);
            System.out.printf("%05d\n", 123);
    
            System.out.printf("%f\n", 123.45);
            System.out.printf("%7.1f\n", 123.45);
            System.out.printf("%7.3f\n", 123.45);
    
            System.out.printf("%s\n", "Hi~JAVA");
            System.out.printf("%10s\n", "Hi~JAVA");            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}