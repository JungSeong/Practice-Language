package cooperation;

public class Subway {
    String lineNumber;
    int passengerCount;
    int money;

    public Subway(String line){
        this.lineNumber = line;
    }

    public void take(int money){
        this.money += money;
        this.passengerCount++;
    }

    public void showInfo(){
        System.out.println(this.lineNumber + "의 승객은 " + this.passengerCount +"명이고, 수입은 " + this.money + " 원 입니다.");
    }
}
