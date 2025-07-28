//ex12_2.java
// 생성자 호출 순서의 예

class Car {
    Car() {
        System.out.println("슈퍼 클래스 생성자 호출~~");
    }
}

class Sedan extends Car {
    Sedan() {
        System.out.println("서브 클래스 생성자 호출~~");
    }
}

public class ex12_2 {
    public static void main(String[] args) {
        try {
            Sedan sedan1 = new Sedan();            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
