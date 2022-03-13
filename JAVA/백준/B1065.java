import java.util.Scanner;
public class B1065 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int res = 0;
        for(int i = 1;i<=n;i++){
            res += arithmetic_sequence(i);
        }
        System.out.println(res);
        
        sc.close();
    }


    public static int[]  getDigits(int n) {
        int[] digits = new int[3];
        for(int i=0;i<3;i++){
            digits[i] = n%10;
            n=n/10;
        }
        return digits;
    }
    public static int arithmetic_sequence(int n) {

        int cnt = 0;
        if(n<100) cnt =1;
        else if(n==1000)  cnt =0;
        else{
            int[] digits = getDigits(n);
            if(digits[2]-digits[1] == digits[1] - digits[0]) cnt =1;
        }
        return cnt;
    }

}
