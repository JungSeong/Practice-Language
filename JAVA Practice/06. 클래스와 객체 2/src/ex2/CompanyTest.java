package ex2;

public class CompanyTest {
    public static void main(String[] args) {
        Company person1 = new Company("우왁굳");
        Company person2 = new Company("장성원");

        System.out.println(person1.getPersonName() + "님의 카드번호 : " + person1.getcardNum());
        System.out.println(person2.getPersonName() + "님의 카드번호 : " + person2.getcardNum());
    }
}
