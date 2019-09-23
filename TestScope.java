public class TestScope
{
	public static void main(String[] args) 
	{
		// A block is a group of statements between balanced braces
		// All block variables are local variable's and What ever 
		// variables declared inside the block ,the scope restricted to that block only
		// So 'a' scope is restricted to inside for loop.
		for (int a = 0;a < 5 ; a++) 
		{
			System.out.println(a);
			// do anything with a ---> compiler says "yes boss"
		}
		// but here a is outside of loop
		// so the compler will says "Sorry boss, what is a ??"
		a = 0;
	}
}