package staticex;

public class Student2 {
    private static int serialNum = 1000;
    public int studentID;
    private String studentName;
    public int grade;
    public String address;

    public Student2(String studentName){
        setStudentName(studentName);
        studentID = serialNum;
        serialNum++;
    }

    public static int getserialNum() {
        int i = 10;
        return serialNum;
    }

    public static void setserialNum(int serialNum) {
        Student2.serialNum = serialNum;
    }

    public String getStudentName() {
        return this.studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }
    
}
