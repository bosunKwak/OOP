import java.util.Scanner;
import java.util.Arrays;

public class B2480 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] array = new int[3];

        for (int i=0;i<3;i++){
            array[i] = sc.nextInt();
        }
        Arrays.sort(array);
        if(array[0]==array[1] && array[1]==array[2]){
            System.out.println(10000+array[0]*1000);
        }
        else if(array[0] != array[1] && array[1] != array[2]){
            System.out.println(array[2]*100);
        }
        else{
            System.out.println(array[1]*100+1000);
        }

        sc.close();
    }
}
