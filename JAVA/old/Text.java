
import java.util.Scanner;
public class Text{

	void removeExtraBlankSpace(StringBuilder s){
		int flag = 0; // space encounder flag
		
		for (int i =0; i < s.length() ;i++ ) {

			//  if first space found set flag =1
			if (s.charAt(i) == ' ' && flag == 0 ){
				flag= 1;
			}
			// if space occure more than one delete it 
			else if (s.charAt(i) == ' ' && flag == 1) {
				s.deleteCharAt(i);
				i -= 1; // after deleting set index
			}
			// if no space flag = 0
			else{
				flag = 0;
			}
		}
	}

	int countWord(StringBuilder s){
		int count = 0;
		for (int i =0; i < s.length() ;i++ ) {
			//  if first space found set flag =1
			if (s.charAt(i) == ' '){
				++count;
			}
		}
		return count+1; // 1 extra for last word
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		System.out.println("Enter a sentence:");
		String s = in.nextLine();

		// it will remove all after and before space and 
		// create a new StringBuilder object named ans
		StringBuilder ans = new StringBuilder(s.trim());
		// System.out.println(s);
		// System.out.println(ans);

		Text obj = new Text();
		obj.removeExtraBlankSpace(ans);
		System.out.println("\nTrimmed Text: "+ans);
		System.out.println("Word Count  : "+obj.countWord(ans));
	}
}

//      Shows   the trimmed  text and      the     number of    words.      
