public class WordNode implements Comparable{
	// Declaring variables
	private String word;
	private WordNode next;
	// Constructor
	public WordNode(String word) 
	{
		this.word = word;
	}

	// Getter for word
	public String getWord() 
	{
		return word;
	}

	// Getter for next
	public WordNode getNext() 
	{
		return next;
	}

	// Setter for next
	public void setNext(WordNode next) 
	{
		this.next = next;
	}

	// Implementing unimplemented method compareTo
	@Override
	public int compareTo(WordNode wN) 
	{
		// TODO Auto-generated method stub
		return word.compareTo(wN.word);
	}

	// Equals Method
	@Override
	public boolean equals(Object obj) 
	{
		// TODO Auto-generated method stub
		WordNode w=(WordNode)obj;
		return word.equals(w);
	}
}

// WORD LIST CLASS:

// --------------------------------------------------------------------------

public class WordList
{
	private WordNode head;
	private WordNode tail;
}

// WRITE THE FOLLOWING METHOD:

