// ex3_6.java
// 다양한 서식 활용 예 2

package Java.Java_Beginner.Chapter03;

public class ex3_6 {
    public static void main(String[] args) {
        try {
            System.out.printf("\n줄바꿈\n연습 \n");
            System.out.printf("\t탭키\t연습 \n");
            System.out.printf("이것을\r덮어씁니다. \n");
            System.out.printf("글자가 \"강조\"되는 효과 \n");
            System.out.printf("\\\\\\ 역슬래시 세개 출력 \n");            
        } catch (Exception e) {
            System.err.println("예외 발생: " + e.getMessage());
        }
    }
}
