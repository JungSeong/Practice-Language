package Array;

public class BookArray {
    public static void main(String[] args) {
        Book[] library = new Book[3];

        library[0] = new Book("태백산맥", "조정래");
        library[1] = new Book("데미안", "헤르만 헤세");
        library[2] = new Book("어떻게 살 것인가", "유시민");

        for (int i=0 ; i<library.length; i++)
        {
            library[i].showBookInfo();
        }

        for (int i=0 ; i<library.length; i++)
        {
            System.out.println(library[i]);
        }
    }
}
