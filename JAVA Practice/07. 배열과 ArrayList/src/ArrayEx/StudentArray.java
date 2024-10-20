package ArrayEx;

public class StudentArray {
    public static void main(String[] args) {
        Student[] student = new Student[3];
        student[0] = new Student(1001,"James");
        student[1] = new Student(1002,"Tomas");
        student[2] = new Student(1003,"Edward");

        for (int i=0; i<student.length; i++)
        {
            student[i].showStudentInfo();
        }
    }
}
