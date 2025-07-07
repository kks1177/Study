// Ex7_CarExam_Overloading.java
// 생성자 선언과 호출 - 생성자 오버로딩

package ThisIsJava.ch06;

public class Ex7_CarExam2 {
    public static void main(String[] args) {
        Ex7_Car2 car1 = new Ex7_Car2();
        System.out.println("car1.company : " + car1.company);
        System.out.println();

        Ex7_Car2 car2 = new Ex7_Car2("자가용");
        System.out.println("car2.company : " + car2.company);
        System.out.println("car2.model : " + car2.model);
        System.out.println();
        
        Ex7_Car2 car3 = new Ex7_Car2("자가용", "빨강");
        System.out.println("car3.company : " + car3.company);
        System.out.println("car3.model : " + car3.model);
        System.out.println("car3.color : " + car3.color);
        System.out.println();

        Ex7_Car2 car4 = new Ex7_Car2("택시", "검정", 200);
        System.out.println("car4.company : " + car4.company);
        System.out.println("car4.model : " + car4.model);
        System.out.println("car4.color : " + car4.color);
        System.out.println("car4.maxSpeed : " + car4.maxSpeed);
        System.out.println();
    }
}
