package test;

public class Employee {
    public String name;
    public String grade;

    public Employee(String name, String grade){
        this.name = name;
        this.grade = grade;
    }
}

class Engineer extends Employee{

    private String skillset;

    public Engineer(String name, String grade){
        super(name, grade);
    }

    public String getSkillset() {
        return this.skillset;
    }

    public void setSkillset(String skillset) {
        this.skillset = skillset;
    }
}
