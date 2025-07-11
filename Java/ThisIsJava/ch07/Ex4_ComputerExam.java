// Ex4_ComputerExam.java
// 메소드 재정의 

package ThisIsJava.ch07;

public class Ex4_ComputerExam {
    public static void main(String[] args) {
        int r = 10;

        Ex4_Calculator calculator = new Ex4_Calculator();
        System.out.println("원 면적 : " + calculator.areaCircle(r));
        System.out.println();

        Ex4_Computer computer = new Ex4_Computer();
        System.out.println("원 면적 : " + computer.areaCircle(r));
    }
}
