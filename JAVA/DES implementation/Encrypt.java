package desImplement;

public class Encrypt {

	/**
	 * IP (Initial Permutation)
	 */
	 static int[] IP = {
			58, 50, 43, 34, 26, 18, 10, 2,
			60, 52, 44, 36, 28, 20, 12, 4,
			62, 54, 46, 38, 30, 22, 14, 6,
			64, 56, 48, 40, 32, 24, 16, 8,
			57, 29, 41, 33, 25, 17, 9, 1,
			59, 51, 43, 35, 27, 19, 11, 3,
			61, 53, 45, 37, 29, 21, 13, 5,
			63, 55, 47, 39, 31, 23, 15, 7
	};
	
	/**
	 * FP(Final Permutation)
	 */
	 static int[] FP = {
	        40, 8, 48, 16, 56, 24, 64, 32,
	        39, 7, 47, 15, 55, 23, 63, 31,
	        38, 6, 46, 14, 54, 22, 62, 30,
	        37, 5, 45, 13, 53, 21, 61, 29,
	        36, 4, 44, 12, 52, 20, 60, 28,
	        35, 3, 43, 11, 51, 19, 59, 27,
	        34, 2, 42, 10, 50, 18, 58, 26,
	        33, 1, 41, 9, 49, 17, 57, 25
	};
	
	/**
	 * E(Expansion function)
	 */
	 static int[] E = {
	        32, 1,  2,  3,  4,  5,
	        4,  5,  6,  7,  8,  9,
	        8,  9,  10, 11, 12, 13,
	        12, 13, 14, 15, 16, 17,
	        16, 17, 18, 19, 20, 21,
	        20, 21, 22, 23, 24, 25,
	        24, 25, 26, 27, 28, 29,
	        28, 29, 30, 31, 32, 1
	};
	
	/**
	 * P (permutation)
	 */
	 static int[] P = {
	        16, 7,  20, 21,
	        29, 12, 28, 17,
	        1,  15, 23, 26,
	        5,  18, 31, 10,
	        2,  8,  24, 14,
	        32, 27, 3,  9,
	        19, 13, 30, 6,
	        22, 11, 4,  25
	};
	
	/**
	 * S_boxes(Substitution boxes)
	 */
	static int[][] S_box = { {
        14, 4,  13, 1,  2,  15, 11, 8,  3,  10, 6,  12, 5,  9,  0,  7,
        0,  15, 7,  4,  14, 2,  13, 1,  10, 6,  12, 11, 9,  5,  3,  8,
        4,  1,  14, 8,  13, 6,  2,  11, 15, 12, 9,  7,  3,  10, 5,  0,
        15, 12, 8,  2,  4,  9,  1,  7,  5,  11, 3,  14, 10, 0,  6,  13
    }, {
        15, 1,  8,  14, 6,  11, 3,  4,  9,  7,  2,  13, 12, 0,  5,  10,
        3,  13, 4,  7,  15, 2,  8,  14, 12, 0,  1,  10, 6,  9,  11, 5,
        0,  14, 7,  11, 10, 4,  13, 1,  5,  8,  12, 6,  9,  3,  2,  15,
        13, 8,  10, 1,  3,  15, 4,  2,  11, 6,  7,  12, 0,  5,  14, 9
    }, {
        10, 0,  9,  14, 6,  3,  15, 5,  1,  13, 12, 7,  11, 4,  2,  8,
        13, 7,  0,  9,  3,  4,  6,  10, 2,  8,  5,  14, 12, 11, 15, 1,
        13, 6,  4,  9,  8,  15, 3,  0,  11, 1,  2,  12, 5,  10, 14, 7,
        1,  10, 13, 0,  6,  9,  8,  7,  4,  15, 14, 3,  11, 5,  2,  12
    }, {
        7,  13, 14, 3,  0,  6,  9,  10, 1,  2,  8,  5,  11, 12, 4,  15,
        13, 8,  11, 5,  6,  15, 0,  3,  4,  7,  2,  12, 1,  10, 14, 9,
        10, 6,  9,  0,  12, 11, 7,  13, 15, 1,  3,  14, 5,  2,  8,  4,
        3,  15, 0,  6,  10, 1,  13, 8,  9,  4,  5,  11, 12, 7,  2,  14
    }, {
        2,  12, 4,  1,  7,  10, 11, 6,  8,  5,  3,  15, 13, 0,  14, 9,
        14, 11, 2,  12, 4,  7,  13, 1,  5,  0,  15, 10, 3,  9,  8,  6,
        4,  2,  1,  11, 10, 13, 7,  8,  15, 9,  12, 5,  6,  3,  0,  14,
        11, 8,  12, 7,  1,  14, 2,  13, 6,  15, 0,  9,  10, 4,  5,  3
    }, {
        12, 1,  10, 15, 9,  2,  6,  8,  0,  13, 3,  4,  14, 7,  5,  11,
        10, 15, 4,  2,  7,  12, 9,  5,  6,  1,  13, 14, 0,  11, 3,  8,
        9,  14, 15, 5,  2,  8,  12, 3,  7,  0,  4,  10, 1,  13, 11, 6,
        4,  3,  2,  12, 9,  5,  15, 10, 11, 14, 1,  7,  6,  0,  8,  13
    }, {
        4,  11, 2,  14, 15, 0,  8,  13, 3,  12, 9,  7,  5,  10, 6,  1,
        13, 0,  11, 7,  4,  9,  1,  10, 14, 3,  5,  12, 2,  15, 8,  6,
        1,  4,  11, 13, 12, 3,  7,  14, 10, 15, 6,  8,  0,  5,  9,  2,
        6,  11, 13, 8,  1,  4,  10, 7,  9,  5,  0,  15, 14, 2,  3,  12
    }, {
        13, 2,  8,  4,  6,  15, 11, 1,  10, 9,  3,  14, 5,  0,  12, 7,
        1,  15, 13, 8,  10, 3,  7,  4,  12, 5,  6,  11, 0,  14, 9,  2,
        7,  11, 4,  1,  9,  12, 14, 2,  0,  6,  10, 13, 15, 3,  5,  8,
        2,  1,  14, 7,  4,  10, 8,  13, 15, 12, 9,  0,  3,  5,  6,  11
    } };
	
	/**
	 * IP(Initial Permutation) 통과 후의 값 
	 * @param original (64bits)
	 * @return tmp (64bits)
	 */
	 static byte[] IP_Output (byte[] original) {
		byte[] tmp=new byte[64];
		for(int i=0;i<64;i++) {
			tmp[i]=original[IP[i]-1];
		}
		return tmp;
	}
	
	 /**
	  * FP(Final Permutation) 통과 후의 값
	  * @param original
	  * @return tmp
	  */
	static byte[] FP_Output(byte[] original) {
		byte[] tmp = new byte[64];
		System.out.println("FP permution output: ");
		for(int i=0;i<64;i++) {
			tmp[i]=original[FP[i]-1];
			System.out.print(tmp[i]);
			if(i%8==7)	System.out.print(" ");
		}
		System.out.println();
		return tmp;
	}
	

	/**
	 * Rounding : round 반복과정
	 * @param original
	 * @param key
	 * @return nextTemp
	 */
	static byte[] Rounding(byte[] original, byte[] key) {

		byte[] nextTemp=new byte[64];	//nextTemp = Li,Ri
		byte[] left = new byte[32];		//left = Li-1
		byte[] right= new byte[32];		//right = Ri-1
		byte[] rightExpansion = new byte[48];	//확장된 오른쪽 48bit 값
		byte[] temp = new byte[32];
		byte[] rightTemp=new byte[32];
		int sTemp;
		//64bit를 left 32bit, right 32bit로 나눈다. 
		for(int i=0;i<32;i++) {
			left[i]=original[i];	//original 0~31번째까지 왼쪽32bit
			right[i]=original[i+32];	////original 32~63번째까지 오른쪽 32bit
			
			//32bit temp[i]는 마지막 단계에서 Ri-1 -> Li 하기 위해 오른쪽 32bit를 임시로 저장
			temp[i]=right[i];
		}
			
//-----------F-box 내부--------------------------------------------------------------
		/**
		 * Expansion P-box 통과 
		 */
		//오른쪽 32bit를 48bit로 확장 (Expansion Function 사용)
		System.out.print("Expansion P-box output:");
		for(int i=0;i<48;i++) {
			rightExpansion[i]=right[E[i]-1];
			System.out.print(rightExpansion[i]);
			if(i%8==7)	System.out.print(" ");
		}
		System.out.println();
		
		/**
		 * XOR operation with key and right
		 */
		//오른쪽 48bit와 key값  XOR operation
		System.out.println("After XOR operation with right bit and key : ");
		for(int i=0;i<48;i++) {
			rightExpansion[i]=(byte)(rightExpansion[i]^key[i]);	
			System.out.print(rightExpansion[i]);
			if(i%8==7)	System.out.print(" ");
			}
		System.out.println();
		

		/**
		 * S_box 통과
		 * 		
		 * 48bit를 6bit씩 8개의 파트로 나누고,각각 s-box에 넣어주어 4bit로 압축시킨다.
		 * S_box는 8개 존재하므로 8번 반복문을 돌린다. 				
		 */
		for(int j=0;j<8;j++){
			//row : S_box input값 6bit 중 처음bit와 마지막bit
			int row = 2*rightExpansion[j*6] + rightExpansion[j*6+5];	
			//column : S_box input값 6bit 중 가운데 4bit
			int column = 8*rightExpansion[j*6+1] + 4*rightExpansion[j*6+2]+ 2*rightExpansion[j*6+3] 
					+ rightExpansion[j*6+4];
			
			//S_box는 2차원 배열이므로 S_box[i]에 해당하는 배열은 1차원 배열이고, 
			//S_box[i]의 row행 column열은 16*row+column이므로 sTemp는 다음과 같이 설정한다. 
			sTemp = S_box[j][16*row+column];
			
			if((sTemp & 8) == 8) right[j*4] = 1;
			else right[j*4]=0;
			
			if((sTemp & 4) == 4) right[j*4+1] = 1;
			else right[j*4+1]=0;
			
			if((sTemp & 2) == 2) right[j*4+2] = 1;
			else right[j*4+2]=0;
			
			if((sTemp & 1) == 1) right[j*4+3] = 1;
			else right[j*4+3]=0;
		}
		System.out.print("S_box output : ");
		for(int i=0;i<32;i++){
			System.out.print(right[i]);
			if(i%8==7) System.out.print(" ");
		}
		System.out.println();
			
		
		/**
		 * P 통과
		 */
		System.out.print("P output: ");
		for(int i=0;i<32;i++) {
			nextTemp[i]=temp[i];
			rightTemp[i]=right[P[i]-1];
			System.out.print(rightTemp[i]);
			if(i%8==7) System.out.print(" ");
		}
		System.out.println();
		
	//------------------------------------------------------------------------------F함수end
			
		/**
		 *  XOR operation with (Li-1) and F함수 수행결과 값(rightTemp)
		 */
		System.out.print("After XOR operation with Li-1 and F: ");
		for(int i=0;i<32;i++) {
			left[i]=(byte)(left[i]^rightTemp[i]);
			nextTemp[i+32]=left[i];
			System.out.print(left[i]);
			if(i%8==7) System.out.print(" ");
		}
		System.out.println();
		return nextTemp;
	}	
	

	/**
	 * swapping : 최종 32bit Swapping
	 * @param temp(byte array)
	 * @return temp
	 */
	static byte[] swapping(byte[] temp) {
		byte[] right=new byte[32];
		byte[] left = new byte[32];
		
		//64bit를 left 32bit, right 32bit로 나눔
		for(int i=0;i<32;i++) {
			left[i]=temp[i];	//상위 32bit를 left 32bit로 
			right[i]=temp[i+32];	//하위 32bit를 right 32bit로
		}
		
		//swapping left 32bit with right 32bit
		for(int i=0;i<32;i++) {
			temp[i]=right[i];
			temp[i+32]=left[i];
		}
		System.out.println("After swapping 32bit...");
		System.out.print("left 32bit : ");
		for(int i=0;i<32;i++) {
			System.out.print(temp[i]);
			if(i%8==7) System.out.print(" ");
		}
		System.out.println();
		
		System.out.print("right 32bit : ");
		for(int i=0;i<32;i++) {
			System.out.print(temp[i+32]);
			if(i%8==7) System.out.print(" ");
		}
		System.out.println();
		
		return temp;
	}
	
}
