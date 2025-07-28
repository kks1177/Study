// ex12_3.java
// 여러 생성자 호출의 예

class Car {
    Car() {
        System.out.println("슈퍼 클래스 생성자 호출(파라미터 없음)");
    }
    Car(String str) {
        System.out.println("슈퍼 클래스 생성자 호출 ==> " + str);
    }
}

class Sedan extends Car {
    Sedan(String str) {
        System.out.println("서브 클래스 생성자 호출 ==> " + str);
    }
}

public class ex12_3 {
    public static void main(String[] args) {
        try {
            Sedan sedan1 = new Sedan("여기요~~");            
        } catch (Exception e) {
            System.err.println("\n\n !!!예외 발생: " + e.getMessage());
        }
    }
}
