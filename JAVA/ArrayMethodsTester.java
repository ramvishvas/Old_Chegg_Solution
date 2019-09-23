import java.util.Arrays;
import java.util.Random;

class ArrayMethods {

   //***NOTE that these methods will change the array itself


   //part a, fill in this method
   public static void swapFirstAndLast(int[] values) {
       // save the first element to a temp var
       int temp = values[0];
       //move the last element to the first position
       values[0] = values[values.length-1];
       // now put the saved first element into the last position
       values[values.length-1] = temp;


   }

   //part b, fill in this method
   public static void shiftRight(int[] values) {
   		int temp = values[values.length-1];
   		for (int i = values.length-1; i > 0 ;i--) {
   			values[i] = values[i-1];
   		}
   		values[0] = temp;
   }

   //part c, set all even elements to 0.
   public static void setEvensToZero(int[] values) {
   		for (int i = 0; i <= values.length-1;i++) {
   			if(values[i]%2 == 0) {
   				values[i] = 0;
   			}
   		}
   }

   //part d, replace each element except the first and last by larger of two
   //around it
   public static void largerOfAdjacents(int[] values) {
      int prev = values[0];
      for (int i = 1; i < values.length-1 ;i++ ) {
        if (prev > values[i+1]) {
          int temp = values[i];
          values[i] = prev;
          prev = temp;
        }else{
          prev = values[i];
          values[i] = values[i+1];
        }
      }
   }

   //part e, remove middle el if odd length, else remove middle two els.
   public static int[] removeMiddle(int[] values) {
       //replace the following line with your answer
       //this line needed to compile
      int len = values.length;
      int middle;
      int b[];
      if (len > 2) {
        int index = 0;
        if (len %2 == 0) {
          b = new int[len-2];
          middle = len/2;
          for (int i =0; i<len ;i++ ) {
            if (i ==middle-1 || i == middle) {
              continue;
            }
            b[index++] = values[i];
          }
        }else{
          b = new int[len-1];
          middle = len/2;
          for (int i =0;i<len ;i++ ) {
            if (i == middle) {
              continue;
            }
            b[index++] = values[i];
          }
        }
        return b;
      }
      return null;
   }

   //part f - move all evens to front
   public static void moveEvensToFront(int[] values) {

   }

   //part g - return second largest element in array
   public static int ret2ndLargest(int[] values) {
       // replace this line with your correct return value
       return 0;
   }

   //part H - returns true if array is sorted in increasing order
   public static boolean isSorted(int[] values) {
       // replace this line with your correct return value
       return false;
   }

   //PART I - return true if array contains 2 adjacent duplicate values

   public static boolean hasAdjDuplicates(int[] values) {
       // replace this line with your correct return value
       return false; //dummy return value
   }


   //PART J - return true if array contains 2 duplicate values
   //duplicates need not be adjacent to return true

   public static boolean hasDuplicates(int[] values) {
       // replace this line with your correct return value
       return false;
   }
}

// import java.util.Arrays;
// import java.util.Random;

public class ArrayMethodsTester {

   //helper method to print an array
   public static void printArray(int[] values) {
       System.out.println(Arrays.toString(values));
   }
   public static void main(String[] args) {

       //In your main method you should test your array methods
       //Create an array of size 10
       //****** HERE
       int[] a = new int[10]; //array of size 1
      
       //**** Fill the array with random values (use a loop, and a
       //Random object)
       Random random = new Random();  
       for (int i =0;i < 10 ; i++) {
         a[i] = random.nextInt(50);
       }
      
      
       //Now print the array to show initial values
       System.out.println("Initial Array:");
       //note the usage of the "toString()" method here to print the array
       System.out.println(Arrays.toString(a));
       //Could replace the previous line with this:
       //printArray(testValues);
       //blank line
       System.out.println();


       //Test methods below this line.

      

       //Test of swapFirstAndLast()
       System.out.println("Before call to swapFirstAndLast():");
       printArray(a);
       //swap first and last element
       //this method modifies the array referenced by "testValues"
       ArrayMethods.swapFirstAndLast(a);
       System.out.println("After call to swapFirstAndLast()");
       printArray(a); //printing the same array but it has changed
       System.out.println();

       //continue with tests as you complete methods ... 
       // shift right
       ArrayMethods.shiftRight(a);
       System.out.println("After call to shiftRight()");
       printArray(a); //printing the same array but it has changed
       System.out.println();

       // //setEvensToZero
       // ArrayMethods.setEvensToZero(a);
       // System.out.println("After call to setEvensToZero()");
       // printArray(a); //printing the same array but it has changed
       // System.out.println();

       //largerOfAdjacents
       ArrayMethods.largerOfAdjacents(a);
       System.out.println("After call to largerOfAdjacents()");
       printArray(a); //printing the same array but it has changed
       System.out.println();


      //removeMiddle
       int b[] = ArrayMethods.removeMiddle(a);
       System.out.println("After call to removeMiddle()");
       printArray(b); //printing the same array but it has changed
       int c[] = {1,2,3};
       printArray(ArrayMethods.removeMiddle(c));
       System.out.println();
     
     }

}

