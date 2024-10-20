package staticex;

public class Student3 {
    private static int serialNum = 1000;
    public int studentID;
    private String studentName;
    public int grade;
    public String address;
    public int cardNum;

    public Student3(String studentName){
        setStudentName(studentName);
        studentID = serialNum;
        cardNum = studentID + 100;
        serialNum++;
    }

    public static int getserialNum() {
        int i = 10;
        return serialNum;
    }

    public static void setserialNum(int serialNum) {
        Student3.serialNum = serialNum;
    }

    public String getStudentName() {
        return this.studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }
    
}
