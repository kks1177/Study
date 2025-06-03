// ex8_6.java
// 배열의 크기 계산

package Java.Java_Beginner.Chapter08;

public class ex8_6 {
    public static void main(String[] args) {
        int aa[] = {10, 20, 30, 40, 50};
        int count = 0, size = 0;

        try {
            count = aa.length;
            size = count * Integer.BYTES;
    
            System.out.printf("배열 aa[]의 요소의 개수는 %d개 입니다. \n", count); 
            System.out.printf("배열 aa[]의 요소의 전체 크기는 %d 바이트 입니다. \n", size);             
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
