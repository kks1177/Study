// Ex5_Split.java
// 문자열(String) 타입

package ThisIsJava.ch05;

public class Ex5_Split {
    public static void main(String[] args) {
        String board = "1,자바 학습,참조 타입 String을 학습합니다.,홍길동";

        try {
            // 문자열 분리
            String[] tokens = board.split(",");

            // 인덱스별로 읽기
            System.out.println("번호 : " + tokens[0]);
            System.out.println("제목 : " + tokens[1]);
            System.out.println("내용 : " + tokens[2]);
            System.out.println("성명 : " + tokens[3]);
            System.out.println();

            // for문을 이용한 읽기
            for (int i = 0; i<tokens.length; i++) {
                System.out.println(tokens[i]);
            }
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
