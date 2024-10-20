package Application;
import java.util.ArrayList;

public class Student {
    public int studentID;
    public String studentName;
    public ArrayList<Subject> subjectlist;

    public Student(int studentID, String studentName)
    {
        this.studentID = studentID;
        this.studentName = studentName;
        subjectlist = new ArrayList<Subject>();
    }

    public void addSubject(String subjectName, int score)
    {
        Subject subject = new Subject();
        subject.subjectName = subjectName;
        subject.score = score;
        subjectlist.add(subject); 
    }

    public void showStudentInfo()
    {
        int total = 0;
        for(Subject s : subjectlist) {
            total += s.score;
            System.out.println("학생 " + studentName + "의 " + s.subjectName + " 성적은 " + s.score + " 입니다.");
        }
        System.out.println("학생 " + studentName + "의 총 성적은 " + total + " 입니다.");
    }
}
