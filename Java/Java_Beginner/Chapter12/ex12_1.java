// ex12_1.java
// 클래스 상속의 예

class Car {
    String color;
    int speed;
    
    void upSpeed(int value) {
        speed += value;
    }
    void downSpeed(int value) {
        speed -= value;
    }
}

class Sedan extends Car {
    int seatNum;

    int getSeatNum() {
        return seatNum;
    }
}
class Truck extends Car {
    int capacity;

    int getCapacity() {
        return capacity;
    }
}

public class ex12_1 {
    public static void main(String[] args) {
        Sedan sedan1 = new Sedan();
        Truck truck1 = new Truck();

        sedan1.upSpeed(300);
        truck1.upSpeed(100); 

        sedan1.seatNum = 5;
        truck1.capacity = 50;

        System.out.println("승용차 속도는 " + sedan1.speed + "km, 좌석수는 " + sedan1.getSeatNum() + "개 입니다.");
        System.out.println("트럭 속도는 " + truck1.speed + "km, 적재량은 " + truck1.getCapacity() + "톤 입니다.");
    }
}
