package desImplement;

public class createKey {

	/**
	 * PC1 (Permuted choice 1)
	 */
	static int[] PC1 = {
	        57, 49, 41, 33, 25, 17, 9,
	        1,  58, 50, 42, 34, 26, 18,
	        10, 2,  59, 51, 43, 35, 27,
	        19, 11, 3,  60, 52, 44, 36,
	        63, 55, 47, 39, 31, 23, 15,
	        7,  62, 54, 46, 38, 30, 22,
	        14, 6,  61, 53, 45, 37, 29,
	        21, 13, 5,  28, 20, 12, 4
	};
	
	/**
	 * PC2( Permuted choice 2)
	 */
	static int[] PC2 = {
	        14, 17, 11, 24, 1,  5,
	        3,  28, 15, 6,  21, 10,
	        23, 19, 12, 4,  26, 8,
	        16, 7,  27, 20, 13, 2,
	        41, 52, 31, 37, 47, 55,
	        30, 40, 51, 45, 33, 48,
	        44, 49, 39, 56, 34, 53,
	        46, 42, 50, 36, 29, 32
	};
	
    /**
     * shift_schedule
     * 1,2,9,16 round에서는 1번 shift하고, 나머지 round에서는 2번 shift한다. 
     */
	static int[] shift_schedule = { 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};
	
	/**
	 * PC1_Output 
	 * @param original
	 * @return
	 */
	static byte[] PC1_Output(byte[] original) {
		byte[] key = new byte[56];
		for(int i=0;i<56;i++) {
			key[i]=original[PC1[i]-1];
		}
		return key;
	}
	
	/**
	 * Shifting : shift every round according to shift_schedule
	 * 한 쪽 28bit의 shift만 구현하고 실행시에 반복시킴
	 */
	static byte[] Shifting(byte temp[],int j) {
		byte[] twoBits = new byte[2];	//순환 shift할 때, 상위 2bit가 버려지므로 이후에 하위 2bit로 입력하기 위해 저장
		twoBits[0]=temp[0];
		twoBits[1]=temp[1];
		
		// 16개의 key 생성과정 중에서 shift_schedule에 따라 1,2,9,16번째는 1bit shift, 나머지는 2bit shift
		for(int i=0;i<26;i++) {
			temp[i]=temp[i+shift_schedule[j-1]];
		}
		if(shift_schedule[j-1]==1) {
			temp[26]=temp[27];
			temp[27]=twoBits[0];
		}
		else {	//shift_schedule[j]==2일 때
			temp[25]=temp[27];
			temp[26]=twoBits[0];
			temp[27]=twoBits[1];
		}
		return temp;
	}
	
	static byte[][]keylist = new byte[16][48];
	static byte[] combinedKey = new byte[56];	
	static byte[] leftkey = new byte[28];
	static byte[] rightkey = new byte[28];
	
	static byte[][] createSubkeys(byte[] k){	
		
		//input 56bit를 28bit씩 분리
		for(int i=0;i<28;i++) {
			leftkey[i]=k[i];
			rightkey[i]=k[i+28];
		}	
		
		//create 16 keys
		for(int j=0;j<16;j++) {
			leftkey=createKey.Shifting(leftkey, (j+1));
			rightkey=createKey.Shifting(rightkey, (j+1));
			
			//combined leftkey and rightkey for PC2
			for(int i=0;i<28;i++) {
				combinedKey[i]=leftkey[i];
				combinedKey[i+28]=rightkey[i];
			}
			
			//PC2 통과 
			byte[] temp = new byte[48];
			System.out.print((j+1)+"번째 key: ");
			for(int i=0;i<48;i++) {
				temp[i]=combinedKey[PC2[i]-1];
				//keylist에 j번째 key 저장
				keylist[j][i]=temp[i];
				System.out.print(temp[i]);
				if(i%8==7)	System.out.print(" ");
			}
			System.out.println();
		}
		return keylist;
	}
}
