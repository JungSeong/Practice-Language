package cooperation;

public class TakeTransportation {
    public static void main(String[] args) {
        Student student1 = new Student("장성원", 3000);
        Student student2 = new Student("장정원", 2500);

        Bus bus1 = new Bus(1113);
        Subway subway1 = new Subway("경강선");

        student1.takeBus(bus1);
        student1.showInfo();
        bus1.showInfo();

        student2.takeSubway(subway1);
        student2.showInfo();
        subway1.showInfo();

        System.out.println(bus1.passengerCount);
        System.out.println(subway1.passengerCount);
    }
}
