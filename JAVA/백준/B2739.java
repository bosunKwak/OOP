import java.util.Scanner;
public class B2739 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        for(int j=1;j<10;j++){
            System.out.println(n+" * "+j+" = "+n*j);
        }
        sc.close();
    }
}
