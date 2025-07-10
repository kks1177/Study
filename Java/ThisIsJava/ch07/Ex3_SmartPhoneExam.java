// Ex3_SmartPhoneExam.java
// 부모 생성자 호출

package ThisIsJava.ch07;

public class Ex3_SmartPhoneExam {
    public static void main(String[] args) {
        // SmartPhone 객체 생성
        Ex3_SmartPhone myPhone = new Ex3_SmartPhone("갤럭시", "은색");

        // Phone으로부터 상속받은 필드 읽기
        System.out.println("모델 : " + myPhone.model);
        System.out.println("색상 : " + myPhone.color);
    }
}
