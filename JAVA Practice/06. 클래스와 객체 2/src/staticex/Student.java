package staticex;

public class Student {
    public static int serialNum = 1000;
    public int studentID;
    private String studentName;
    public int grade;
    public String address;

    public Student(String studentName){
        setStudentName(studentName);
        studentID = serialNum;
        serialNum++;
    }

    public String getStudentName() {
        return this.studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }
    
}
