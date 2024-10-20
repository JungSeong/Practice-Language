package inheritance;

public class GoldCustomer extends Customer {
    private double saleRatio;
    
    public GoldCustomer(int customerID, String customerName){
        super(customerID, customerName);
        customerGrade = "Gold";
        bonusRatio = 0.02;
        saleRatio = 0.1;
    }

    public String calcPrice(int price) {
        bonusPoint += price * bonusRatio;
        price -= (int) (saleRatio * price);
        return customerName + " 님이 지불해야 하는 금액은 " + price + " 원 입니다.";
    }
}
