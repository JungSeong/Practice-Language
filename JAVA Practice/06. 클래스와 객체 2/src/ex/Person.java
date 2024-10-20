package ex;

public class Person {
    public String personName;
    public int money;

    public Person(String personName, int money){
        this.personName = personName;
        this.money = money;
    }

    public void takeStarBucks(StarBucks cafe){
        String message = cafe.brewing(4000);
        if(message != null) {
            this.money -= money;
            System.out.println(personName + "님이 4000원으로 " + message);
        }
        else {
            System.out.println("에러 발생");
        }
    }

    public void takeBeanBucks(BeanBucks cafe){
        String message = cafe.brewing(4500);
        if(message != null) {
            this.money -= money;
            System.out.println(personName + "님이 4500원으로 " + message);
        }
        else {
            System.out.println("에러 발생");
        }
    }

    public void showInfo(){
        System.out.println(personName + "님의 남은 돈은 " + money + " 원 입니다.");
    }
}
