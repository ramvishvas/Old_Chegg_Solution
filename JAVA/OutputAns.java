public class OutputAns{
	public static void main(String[] args) {
		int i=8;
		while(i <= 25){
			System.out.print(i + " ");
			if ((i % 3) ==0){	
				i *= 2;
			}
			else{
				i -= 2;
			} 
		}
	}
}