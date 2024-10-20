package staticex;

public class StudentTest3 {
    public static void main(String[] args) {
        Student3 student1 = new Student3("이지원");
        Student3 student2 = new Student3("우왁굳");
        
        System.out.println(student1.getStudentName() + "의 학번 : " + student1.studentID + " 카드번호 : " + student1.cardNum);
        System.out.println(student2.getStudentName() + "의 학번 : " + student2.studentID + " 카드번호 : " + student2.cardNum);
    }
}
