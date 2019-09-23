public class Sorting {
    public static void main(String[] args) {
        // Example input.
        int numbers[] = {10, 2, 78, 4, 45, 32, 7, 11};
        int i;

        int numbersSize = numbers.length;
      
        // Print array pre sorting.
        System.out.print("UNSORTED: ");
        for (i = 0; i < numbersSize; i++) {
            System.out.print(numbers[i] + " ");
        }
        System.out.println();

        // Run Insertion Sort.
        insertionSort(numbers);

        // Print array post sorting.
        System.out.print("SORTED: ");
        for (i = 0; i < numbersSize; i++) {
            System.out.print(numbers[i] + " ");
        }
        System.out.println();
    }

    public static void insertionSort(int numbers[]) {
       for (int i = 1; i < numbers.length ; i ++ ) {
           int j = i;
           while(j > 0){
                // setting the new number at correct position
                if (numbers[j] < numbers[j-1]) {
                    int temp  = numbers[j];
                    numbers[j]= numbers[j-1];
                    numbers[j-1] = temp;
                    --j;
                }else{
                    break;
                }
           }
       }
    }
}