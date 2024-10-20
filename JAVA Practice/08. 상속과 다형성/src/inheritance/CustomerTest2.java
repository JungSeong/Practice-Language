package inheritance;
import java.util.ArrayList;

public class CustomerTest2 {
    public static void main(String[] args) {
        ArrayList<Customer> customerlist = new ArrayList<Customer>();
        customerlist.add(new Customer(10010, "이순신"));
        customerlist.add(new VIPCustomer(10020, "김유신", 100));
        customerlist.add(new GoldCustomer(10030, "장성원"));
        customerlist.add(new Customer(10040, "장정원"));
        customerlist.add(new VIPCustomer(10050, "강소이", 101));

        int price = 10000;
        customerlist.get(0).bonusPoint = 1000;
        customerlist.get(1).bonusPoint = 1000;
        customerlist.get(2).bonusPoint = 1000;
        customerlist.get(3).bonusPoint = 1000;
        customerlist.get(4).bonusPoint = 1000;

        for (Customer list : customerlist) {
            System.out.println(list.calcPrice(price));
            System.out.println(list.showCustomerInfo());
        } 
    }   
}
