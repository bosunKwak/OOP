import java.util.Scanner;
public class B1316 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt =0;
        for (int i = 0;i<n;i++){
            String str = sc.next();
            // System.out.print("here is "+str+" ");
            if (check(str) == true){
                cnt++;
            };
        }
        System.out.println(cnt);
        sc.close(); 
    }

    public static boolean check(String str) {

        boolean[] check = new boolean[26];
        int prev = 0;
        for(int i=0;i<str.length();i++){
            int now = str.charAt(i);

            if(check[now-'a']==true){
                //이미 나온적 있음
                if(prev!= now) return false;
            }
            else{
                //나온적 없음
                check[now-'a'] = true;
                prev = now;
            }
            
        }
        return true;
    }
}
