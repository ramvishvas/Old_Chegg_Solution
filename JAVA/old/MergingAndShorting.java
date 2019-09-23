public class MergingAndShorting {
  
	public static void main(String[] args) {
		ArrayMerger am = new ArrayMerger(new int[] {9, 5, 3, 7, 1}, new int[] {4, 10, 6, 8, 2} );
		System.out.printf("%21s %s", "am - unmerged:", am);

		am.merge(false);
		System.out.printf("%n%21s %s", "am - merged unsorted:", am);

		am.merge(true);
		System.out.printf("%n%21s %s", "am - merged sorted:", am);
	}// end main()

}// end Main

class ArrayMerger {
	/* The class is used to merge two integer arrays of 5 elements each into
	* an array of 10 elements. Each input array is first sorted, using selection
	* sort and then merged into the output array.
	*/
	final int LIST_MAX = 5;
	final int MERGE_MAX = 10;
	  
	int[] list1 = new int[LIST_MAX];
	int[] list2 = new int[LIST_MAX];
	int[] merged = new int[MERGE_MAX];
	  
	public ArrayMerger(int[] list1, int[] list2) {
	/* TODO (1):
	*
	* Copy the elements from the given arrays into their respective lists.
	*/
		for (int i=0; i<LIST_MAX;i++ ) {
			this.list1[i] = list1[i];
			this.list2[i] = list2[i];
		}
	  
	}// end ArrayMerger()
  
	public void merge(boolean isSorted) {
	/* TODO (2):
	*
	* Merge the two lists into the merged list.
	*
	* For example, if list1 holds [9, 5, 3, 7, 1] and list2 holds [4, 10, 6, 8, 2],
	* the merged list will hold [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] if isSorted is true,
	* else it will hold [9, 5, 3, 7, 1, 4, 10, 6, 8, 2]
	*
	* Use selection sort to sort the merged list if required.
	*/
		int temp = 0;
		// copy first list
	 	for (int i = 0; i < list1.length ;i++ ) {
	 		merged[i] = list1[i];
	 		temp = i;
	 	}
	 	// copy second list
	 	for (int i=0; i< list2.length ; i++ ) {
	 		merged[++temp] = list2[i];
	 	}
		if (isSorted) {
			this.selectionSort();
		}
	}// end merged()
  
	public void selectionSort() {
	/* TODO (3):
	*
	* Perform an ascending selection sort on the merged list.
	*/
		int minIndex = 0;
		for (int i = 0; i < MERGE_MAX-1 ; i++ ) {
			minIndex = i;
			for (int j =i+1; j < MERGE_MAX ; j++ ) {
				if (merged[minIndex] > merged[j]) {
					minIndex = j;
				}
				// System.out.print(merged[minIndex]+"  ");
			}
			swap(i, minIndex);

		}
	}// selectionSort()
	  
	public int indexOfSmallestElement(int startAt) {
	/* TODO (4):
	*
	* Return the index of the smallest element in the merged array given the
	* starting index.
	*/
		int minIndex = 0;
		for (int i=1;i<MERGE_MAX ;i++ ) {
			if (merged[minIndex] > merged[i]) {
				minIndex = i;
			}
		}
		return minIndex;
	}// end indexOfSmallestElement()
	  
	public void swap(int index1, int index2) {
	/* TODO (5):
	*
	* Swap the two elements of the merged list, at the specified indices.
	*/
		int temp = merged[index1];
		merged[index1] = merged[index2];
		merged[index2] = temp;
	}// end swap()
  
	@Override
	public String toString() {
	/* TODO (6):
	*
	* Return a formatted string of the merged list.
	*
	* If the list holds [1,2,3,4,5,6,7,8,9,10], then
	* the string should be formatted as:
	*
	* "[ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]"
	*/
		String str = "";
		str += "[";
		for (int i =0; i < MERGE_MAX ;i++ ) {
				if (i == MERGE_MAX-1) {
					str += " "+merged[i]+" ]";
				}else{
					str += " "+merged[i]+",";
				}
		}
		return str;
	}// end toString()

}// end ArrayMerger
