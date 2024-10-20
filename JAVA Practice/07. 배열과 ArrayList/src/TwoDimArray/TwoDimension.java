package TwoDimArray;

public class TwoDimension {
    public static void main(String[] args) {
        char[][] str = new char[13][2];
        char p = 'a' - 32;

        for (int i=0; i<str.length; i++){
            for (int j=0; j<str[i].length; j++){
                str[i][j] = p++;
            }
            System.out.println(str[i]);
        }
    }
}
