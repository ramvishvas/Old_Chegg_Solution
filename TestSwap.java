public class TestSwap
{
	public void swap(int x, int y)
	{
		// here x and y is local variable so it wont 
		// affect the original value of x and y
		// swaping value of x and y
		int temp;
		temp = x;
		x = y;
		y = temp;
		// printing after swaping
		System.out.println("Inside Swap Version 1:");
		System.out.println("x = "+x);
		System.out.println("y = "+y);
	}
	// this method will swap element of array at index i and j
	public void swap(int[] a, int i, int j)
	{
		// swaping the value of array at index i and j
		int temp;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		// printing element of array at index i and j after swap
		System.out.println("Inside Swap Version 2:");
		System.out.println("a["+i+"] = "+a[i]);
		System.out.println("a["+j+"] = "+a[j]);
	}
	// printing array elements
	public void printArray(int[] a)
	{
		System.out.println("Array elements: ");
		for (int i = 0; i < a.length; i++) 
			System.out.print(a[i]+" ");
		System.out.println();
	}
	public static void test()
	{
		// creating TestSwap object
		TestSwap t = new TestSwap();
		// creating array size variable
		final int ARRAY_SIZE = 3;
		// creating array of size 3
		int[] arr = new int[ARRAY_SIZE];
		// inserting element at index 0, 1 and 2
		arr[0] = 4;
		arr[1] = 7;
		arr[2] = 8;
		// creating and assigning variable x and y
		int x = 0, y = 2;
		// ptinding original array
		t.printArray(arr);
		// calling swap with variable x and y
		t.swap(x, y);
		// printing that variable x and y which which will be 
		// same as previous
		System.out.println("Inside test:");
		System.out.println("x = "+x);
		System.out.println("y = "+y);
		// printing original array again
		t.printArray(arr);
		// calling swap with variable arr[x] and arra[y]
		t.swap(arr[x], arr[y]);
		// printing original array again bacause
		// swap has no effect on array element
		t.printArray(arr);
		// swaping value of array at index x and y which is 0 and 2 respectivelly
		t.swap(arr, x, y);
		// pring array after swap element at index 0 and 1
		t.printArray(arr);
	}
	public static void main(String[] args) {
		test();
	}
}