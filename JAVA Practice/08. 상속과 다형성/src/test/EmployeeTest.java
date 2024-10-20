package test;
import java.util.ArrayList;

public class EmployeeTest {
    public static void main(String[] args) {
        ArrayList<Employee> employeeList = new ArrayList<Employee>();

        employeeList.add(new Employee("강소이", "A"));
        employeeList.add(new Engineer("장성원", "S"));

        for (Employee list : employeeList){
            System.out.println(list.name + " " + list.grade);
        }
    }
}
