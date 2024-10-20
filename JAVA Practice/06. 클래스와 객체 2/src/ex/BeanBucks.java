package ex;

public class BeanBucks {
    int money;
    String location;
    
    public BeanBucks(String location){
        this.location = location;
    }

    public String brewing(int money){
        this.money += money;

        if (money == Menu.BEANAMERICANO) {
            return "아메리카노를 구매했습니다.";
        }
        else if (money == Menu.BEANLATTE) {
            return "라떼를 구매했습니다.";
        }
        else{
            return null;
        }
    }

    public void showInfo(){
        System.out.println("콩다방 " + location + "점의 수입은 " + money + " 원 입니다.");
    }   
}