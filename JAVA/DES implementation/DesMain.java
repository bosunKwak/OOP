package desImplement;
/**
 * DES implementation
 * 
 * @author 0214k - https://bskwak.tistory.com/
 *
 */
import java.util.Scanner;
public class DesMain {
	/**
	 * main - DES encryption 
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
//		String inputdata = sc.nextLine();
//		String keydata = sc.nextLine();
//		byte[] plaintext = inputdata.getBytes();	//String to byte[]
//		byte[] key = keydata.getBytes();	//String to byte[]

		byte[] plaintext = {
				0,0,0,1,0,1,0,1,
				1,0,0,0,1,0,1,0,
				0,0,1,0,1,0,0,1,
				1,1,0,1,0,0,1,1,
				0,1,1,0,0,1,0,0,
				0,1,0,1,1,0,1,0,
				1,0,1,0,1,1,0,1,
				1,0,0,1,0,1,0,1
		};
		byte[] key = {
				0,0,1,1,1,0,0,1,
				1,0,0,0,1,1,0,1,
				0,1,1,1,0,0,1,0,
				1,1,0,0,0,1,1,0,
				0,0,1,1,0,1,0,1,
				1,0,1,1,0,1,0,0,
				0,0,0,1,1,1,1,0,
				1,1,0,1,0,0,0,1
		};
		
		byte[] keyValue = new byte[64];
		byte[][] keylist = new byte[16][48];
		byte[] ciphertext = new byte[64];
		
		//create key
		keyValue = createKey.PC1_Output(key);
		keylist = createKey.createSubkeys(keyValue);

		//------encrypt---------
		//IP
		ciphertext=Encrypt.IP_Output(plaintext);
		for(int i=0;i<16;i++) {
			System.out.println();
			System.out.println((i+1)+" round... ");
			ciphertext=Encrypt.Rounding(ciphertext, keylist[i]);
		}
		System.out.println();
		//32bit swapping
		ciphertext = Encrypt.swapping(ciphertext);
		System.out.println();
		//FP
		ciphertext=Encrypt.FP_Output(ciphertext);
		System.out.println();
		

		//print plaintext (original text)
		System.out.print("plaintext: ");
		for(int i=0;i<64;i++) {
			System.out.print(plaintext[i]);
			if(i%8==7) System.out.print(" ");
		}
		System.out.println();
		
		//print ciphertext 
		System.out.print("ciphertext: ");
		for(int i=0;i<64;i++) {
			System.out.print(ciphertext[i]);
			if(i%8==7)	System.out.print(" ");
		}
		System.out.println();
		
		sc.close();
	}
}
