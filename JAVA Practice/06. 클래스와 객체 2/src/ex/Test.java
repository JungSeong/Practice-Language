package ex;

public class Test {
    public static void main(String[] args) {
        Person person1 = new Person("김박사", 10000);
        Person person2 = new Person("이박사", 8000);

        StarBucks cafe1 = new StarBucks("어린이대공원");
        BeanBucks cafe2 = new BeanBucks("화양점");

        person1.takeStarBucks(cafe1);
        person2.takeBeanBucks(cafe2);

        cafe1.showInfo();
        cafe2.showInfo();
    }
}
