package ex2;

public class Company {
    private static int serialNum = 0;
    private int cardNum;
    private String personName;

    public Company(String personName){
        setPersonName(personName);
        serialNum++;
        cardNum = serialNum;
    }

	public String getPersonName() {
		return this.personName;
	}

	public void setPersonName(String personName) {
		this.personName = personName;
	}

    public int getcardNum() {
        return this.cardNum;
    }

    public void setcardNum(int cardNum) {
        this.cardNum = cardNum;
    }
}
