package inheritance;

public class VIPCustomer extends Customer {
    private double saleRatio;
    private int agentID;

    public VIPCustomer(int customerID, String customerName, int agentID){
        super(customerID, customerName);
        customerGrade ="VIP";
        bonusRatio = 0.05;
        saleRatio = 0.1;
        this.agentID = agentID;
    }

    public int getAgentID()
    {
        return agentID;
    }

    public String calcPrice(int price) {
        bonusPoint += price * bonusRatio;
        price -= (int) (saleRatio * price);
        return customerName + " 님이 지불해야 하는 금액은 " + price + " 원 입니다.";
    }

    public String showCustomerInfo() {
        return super.showCustomerInfo() + "\n" + customerName +  "님의 담당 상담원 아이디는 " + agentID + "입니다";
    }
}
