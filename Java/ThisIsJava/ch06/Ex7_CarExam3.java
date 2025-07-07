// Ex7_CarExam3.java
// 생성자 선언과 호출

package ThisIsJava.ch06;

public class Ex7_CarExam3 {
    public static void main(String[] args) {
        Ex7_Car3 car1 = new Ex7_Car3("자가용");
        System.out.println("car1.company : " + car1.company);
        System.out.println("car1.model : " + car1.model);
        System.out.println();
        
        Ex7_Car3 car2 = new Ex7_Car3("자가용", "빨강");
        System.out.println("car2.company : " + car2.company);
        System.out.println("car2.model : " + car2.model);
        System.out.println("car2.color : " + car2.color);
        System.out.println();

        Ex7_Car3 car3 = new Ex7_Car3("택시", "검정", 200);
        System.out.println("car3.company : " + car3.company);
        System.out.println("car3.model : " + car3.model);
        System.out.println("car3.color : " + car3.color);
        System.out.println("car3.maxSpeed : " + car3.maxSpeed);
        System.out.println();        
    }
}
