package inheritance;

public class CustomerTest1 {
    public static void main(String[] args) {
        Customer[] customerlist = new Customer[5];

        customerlist[0] = new Customer(10010, "이순신");
        customerlist[1] = new VIPCustomer(10020, "김유신", 100);
        customerlist[2] = new GoldCustomer(10030, "장성원");
        customerlist[3] = new Customer(10040, "장정원");
        customerlist[4] = new VIPCustomer(10050, "강소이", 101);

        int price = 10000;
        customerlist[0].bonusPoint = 1000;
        customerlist[1].bonusPoint = 1000;
        customerlist[2].bonusPoint = 1000;
        customerlist[3].bonusPoint = 1000;
        customerlist[4].bonusPoint = 1000;

        for (Customer list : customerlist) {
            System.out.println(list.calcPrice(price));
            System.out.println(list.showCustomerInfo());
        } 
    }   
}
