// Ex14_Car.java
// Getter와 Setter

package ThisIsJava.ch06;

public class Ex14_Car {
    // 필드 선언
    private int speed;
    private boolean stop;

    // speed 필드의 Getter/Setter 선언
    public int getSpeed() {
        return speed;
    }
    public void setSpeed(int speed) {
        if (speed < 0) {
            this.speed = 0;
        } else {
            this.speed = speed;
        }
    }

    // stop 필드의 Getter/Setter 선언
    public boolean isStop() {
        return stop;
    }
    public void setStop(boolean stop) {
        this.stop = stop;
        if (stop == true) this.speed = 0;
    }
}
