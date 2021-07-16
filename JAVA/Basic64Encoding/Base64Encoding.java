import java.io.*;

public class Base64Encoding {
	
	//main
	public static void main(String[] args) {

		byte[] binary = getBinary("input.txt");
		String Base64data = encoding(binary);
		fileOutput(Base64data);
		
	}
	
	//getBinary : get data from file
	private static byte[] getBinary(String filePath) {
		
		File file = new File(filePath);
		byte[] data = new byte[(int)file.length()];
		try(FileInputStream input = new FileInputStream(file)){
			input.read(data,0,data.length);
		}catch (Throwable e) {
			e.printStackTrace();
		}
		return data;
	}
	
	//fileOutput : output result to a file
	private static void fileOutput(String Base64data) {
		File file = new File("output.txt");
		try{
			PrintStream printStream = new PrintStream(new FileOutputStream(file));
			System.setOut(printStream);
			System.out.print(Base64data);
		}
		catch(Throwable e) {
			e.printStackTrace();
		}
	}

	//Base64EncodingString : String used for Base64 encoding
	private static final String Base64EncodingString = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	
	//Padding symbol 
	private static char PAD   = '=';
	
	// Index of padding symbol
    private static final int PAD_INDEX = 64;

	//encoding : encoding binary data and return it to string
	public static String encoding(byte[] binaryValue) {
		
		StringBuffer sb = new StringBuffer();
		int binaryValueLength = binaryValue.length;
		
		for(int i=0;i<binaryValueLength;i+=3) {
			
			//Encode 1st 6 bit value
			int value1 = (binaryValue[i]>>2)&0x3F;
			sb.append(Base64EncodingString.charAt(value1));
			
			//Encode 2nd 6 bit value
			int value2=(binaryValue[i]&0x3)<<4;
			if(i+1<binaryValueLength) {
				value2=value2 | (binaryValue[i+1]&0xF0)>>4;
			}
			sb.append(Base64EncodingString.charAt(value2));
			
			//Encode 3rd 6 bit value
			int value3;
			if((i+1)<binaryValueLength) {
				value3= ((binaryValue[i+1]&0xF)<<2);
				if((i+2)<binaryValueLength) {
					value3=value3 | ((binaryValue[i+2]>>6)&0x3);
				}
			}else {
				value3=PAD_INDEX;
			}
			if(value3==PAD_INDEX) 	sb.append(PAD);
			else	sb.append(Base64EncodingString.charAt(value3));
			
			//Encode 4th 6 bit value
			int value4;
			if((i+2)<binaryValueLength) {
				value4= binaryValue[i+2]&0x3F;
			}else{
				value4=PAD_INDEX;
			}
			if(value4==PAD_INDEX) 	sb.append(PAD);
			else	sb.append(Base64EncodingString.charAt(value4));
		}
		
		return sb.toString();
	}
}
