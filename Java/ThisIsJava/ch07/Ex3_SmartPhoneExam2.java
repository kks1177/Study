// Ex3_SamrtPhoneExam2.java
// 부모 생성자 호출

package ThisIsJava.ch07;

public class Ex3_SamrtPhoneExam2 {
    public static void main(String[] args) {
        // SmartPhone2 객체 생성
        Ex3_SmartPhone2 myPhone = new Ex3_SmartPhone2("갤럭시", "은색");

        // Phone2으로부터 상속받은 필드 읽기
        System.out.println("모델 : " + myPhone.model);
        System.out.println("색상 : " + myPhone.color);
    }
}
