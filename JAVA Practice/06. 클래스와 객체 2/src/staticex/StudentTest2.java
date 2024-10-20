package staticex;

public class StudentTest2 {
    public static void main(String[] args) {
        System.out.println(Student2.getserialNum());
        Student2 student1 = new Student2("이지원");
        System.out.println(Student2.getserialNum());
        Student2 student2 = new Student2("우왁굳");
        System.out.println(Student2.getserialNum());
        
        System.out.println(student1.studentID);
        System.out.println(student2.studentID);
    }
}
