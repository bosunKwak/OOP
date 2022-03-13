import java.util.Scanner;
public class B2941 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] cro = {"c=","c-","dz=","d-","lj","nj","s=","z="};

        String  str= sc.nextLine();

        for (int i=0;i<cro.length;i++){
            if(str.contains(cro[i])) {
                str = str.replace(cro[i],"1");
            }
        }
        System.out.println(str.length());
        // System.out.println(str);
        sc.close();
    }
}
