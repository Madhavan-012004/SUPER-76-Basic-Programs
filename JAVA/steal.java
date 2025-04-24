import java.util.Scanner;

public class steal {
    public static void CLassifygivensteel(int h, float c, int ts) {   
        boolean cond1 = (h > 60);
        boolean cond2 = (c > 0.8);
        boolean cond3 = (ts > 5700);

        if (cond1 && cond2 && cond3) {
            System.out.println("Grade A");
        } else if (cond1 && cond2) {
            System.out.println("Grade B");
        } else if (cond1 && cond3) {
            System.out.println("Grade C");
        } else if (cond2 && cond3) {
            System.out.println("Grade D");
        } else if (cond1 || cond2 || cond3) {
            System.out.println("Grade E");
        } else {
            System.out.println("Grade F");
        }
    }

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);

        System.out.print("Enter the Heat Capacity: ");
        int h = reader.nextInt();

        System.out.print("Enter the Carbon Content: ");
        float c = reader.nextFloat();

        System.out.print("Enter the Tensile Strength: ");
        int ts = reader.nextInt();

        CLassifygivensteel(h, c, ts);

        reader.close(); 
    }
}
