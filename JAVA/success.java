import java.util.Scanner;
public class success{
    public static void main(String[] args){
        System.out.println("Hello world!");
        Scanner reader = new Scanner(System.in);
        int num = reader.nextInt();

        System.out.println(num+5);
        reader.close();
    }

}