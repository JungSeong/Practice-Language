package thisex;

class Person {
    String name;
    int age;
    
    Person() {
        this("이름 없음", 1);
    }

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

public class CallAnotherConst {
    public static void main(String[] args) {
        Person noname = new Person();
        System.out.println(noname.name);
        System.out.println(noname.age);

        Person person1 = new Person("장성원", 25);
        System.out.println(person1.name);
        System.out.println(person1.age);
    }
}
