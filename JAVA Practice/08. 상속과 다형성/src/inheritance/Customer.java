package inheritance;

public class Customer {
    protected int customerID;
    protected String customerName;
    protected String customerGrade;

    int bonusPoint;
    double bonusRatio;

    public Customer() {
        initCustomer();
    }

    public Customer(int customerID, String customerName){
        this.customerID = customerID;
        this.customerName = customerName;
        initCustomer();
    }

    private void initCustomer()
    {
        customerGrade = "SILVER";
        bonusRatio = 0.01;
    }

    public String calcPrice(int price) {
        bonusPoint += price * bonusRatio;
        return customerName + "님이 지불해야 하는 금액은 " + price + " 원 입니다.";
    }

    public String showCustomerInfo(){
        return customerName + "님의 등급은 " + customerGrade + "이며, 보너스 포인트는 " + bonusPoint + "입니다.";
    }
    
	public int getCustomerID() {
		return this.customerID;
	}

	public void setCustomerID(int customerID) {
		this.customerID = customerID;
	}

	public String getCustomerName() {
		return this.customerName;
	}

	public void setCustomerName(String customerName) {
		this.customerName = customerName;
	}

	public String getCustomerGrade() {
		return this.customerGrade;
	}

	public void setCustomerGrade(String customerGrade) {
		this.customerGrade = customerGrade;
	}
}
