// Ex8_ComputerExam.java
// 메소드 선언과 호출

package ThisIsJava.ch06;

public class Ex8_ComputerExam {
    public static void main(String[] args) {
        // Computer 객체 생성
        Ex8_Computer myCom = new Ex8_Computer();

        // sum() 메소드 호출 시 매개값 1, 2, 3을 제공하고
        // 합산 결과를 리턴받아 result1 변수에 대입
        int result1 = myCom.sum(1, 2, 3);
        System.out.println("result1 : " + result1);

        // sum() 메소드 호출 시 매개값 1, 2, 3, 4, 5를 제공하고
        // 합산 결과를 리턴받아 result2 변수에 대입
        int result2 = myCom.sum(1, 2, 3, 4, 5);
        System.out.println("result2 : " + result2);
        
        // sum() 메소드 호출 시 배열을 제공하고
        // 합산 결과를 리턴받아 result3 변수에 대입
        int[] values = {1, 2, 3, 4, 5};
        int result3 = myCom.sum(values);
        System.out.println("result3 : " + result3);

        // sum() 메소드 호출 시 배열을 제공하고
        // 합산 결과를 리턴받아 result4 변수에 대입
        int result4 = myCom.sum(new int[] {1, 2, 3, 4, 5});
        System.out.println("result4 : " + result4);
    }
}
