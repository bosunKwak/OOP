import java.util.Scanner;
public class B2525 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int hour = sc.nextInt();
        int min = sc.nextInt();
        int cookhour = sc.nextInt();

        min += cookhour;
        if(min >=60){
            hour = hour + min/60;
            min = min%60;
        }
        if(hour>=24){
            hour = hour -24;
        }
        System.out.println(hour+" "+ min);
        sc.close();
    }
}
