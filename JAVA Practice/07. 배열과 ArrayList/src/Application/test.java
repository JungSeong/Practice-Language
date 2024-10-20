package Application;

public class test {
    public static void main(String[] args) {
        Student student1 = new Student(19010683, "장성원");
        Student student2 = new Student(20000000, "나도몰라");

        student1.addSubject("Java", 85);
        student1.addSubject("Python", 100);
        student1.addSubject("C++", 90);

        student2.addSubject("Java", 70);
        student2.addSubject("C", 90);

        student1.showStudentInfo();
        System.out.println();
        student2.showStudentInfo();
    }
}
