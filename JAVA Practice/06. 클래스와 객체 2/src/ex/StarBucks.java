package ex;

public class StarBucks {
    int money;
    String location;
    
    public StarBucks(String location){
        this.location = location;
    }

    public String brewing(int money){
        this.money += money;

        if (money == Menu.STARAMERICANO) {
            return "아메리카노를 구매했습니다.";
        }
        else if (money == Menu.STARLATTE) {
            return "라떼를 구매했습니다.";
        }
        else{
            return null;
        }
    }

    public void showInfo(){
        System.out.println("별다방 " + location + "점의 수입은 " + money + " 원 입니다.");
    }   
}
