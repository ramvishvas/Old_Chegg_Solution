class Encode
{
	public static void main(String[] args) 
	{
		String letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for(int i = 0; i<inputFile.length(); i++)
		{   
	       	char inputin = inputFile.charAt(i);
			int position = (new String(letters).indexOf(inputin));
		   	encoded = (new String(encode).charAt(position));
			System.out.print(encoded);
		}
	}
}