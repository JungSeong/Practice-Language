package Problem;

public class DogTest {
    public static void main(String[] args) {
        Dog[] dog = new Dog[2];
        dog[0] = new Dog("날두", "치와와");
        dog[1] = new Dog("메시", "웰시코기");
    
        for (Dog s : dog){
            System.out.println(s.showDogInfo());
        }
    
        System.out.println();
    
        for (int i = 0; i < dog.length; i++){
            System.out.println(dog[i].showDogInfo());
        }
    }
}
