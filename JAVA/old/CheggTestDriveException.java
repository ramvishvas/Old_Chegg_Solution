// part 1
class CoreBreachException extends Exception{
	public CoreBreachException(){
		super("Core Breach! Evacuate Ship!");
	}
	public CoreBreachException(String msg){
		super(msg);
	}
}

// part 2
class MessageTooLongException extends Exception{
	public MessageTooLongException(){
		super("Message Too Long!");
	}
	public MessageTooLongException(String msg){
		super(msg);
	}
}

// part 3
class ExerciseException extends Exception{
	public ExerciseException(){
       super("Exercise exception thrown!");
       System.out.println("Exception thrown.");
    }
    public ExerciseException(String message){
        super(message);
        System.out.println("ExerciseException invoked "+"with an argument.");
    }
}


// part 4
class CrazyException extends Exception{
    public CrazyException(){
        super("Crazy exception thrown!");
        System.out.println("Wow, Crazy exception thrown!");
    }
    public CrazyException(String message){
        super(message);
        System.out.println("Wow, crazy exception thrown with "+"an argument!");
    }
    public void crazyMethod(){
        System.out.println("Message is " + getMessage());
    }
}

// part 5
class DoubleException extends Exception{
    public DoubleException(){
        super("Double exception thrown!");
    }
    public DoubleException(String message){
        super(message + " " + message);
    }
}

// part 6
class IntException extends Exception{
    private int intMessage;
    public IntException(){
        super("IntException thrown!");
    }
    public IntException(String message){
        super(message + " " + message);
    }
    public IntException(int number){
        super("IntException thrown!");
        intMessage = number;
    }
    public int getNumber(){
       return intMessage;
    }
}

public class CheggTestDriveException{
	public static void main(String[] args) {
		// part 1 testing
		System.out.println("\nPart 1 Output :\n");
		CoreBreachException cbe1 = new CoreBreachException();
		System.out.println(cbe1.getMessage());

		CoreBreachException cbe2 = new CoreBreachException("CoreBreachException Testing Over");
		System.out.println(cbe2.getMessage());


		// part 2 testing
		System.out.println("\nPart 2 Output :\n");
		MessageTooLongException mtle1 = new MessageTooLongException();
		System.out.println(mtle1.getMessage());

		MessageTooLongException mtle2 = new MessageTooLongException("MessageTooLongException Testing Over");
		System.out.println(mtle2.getMessage());


		// part 3 testing
		System.out.println("\nPart 3 Output :\n");
		ExerciseException ee = new ExerciseException("Do Be Do");
		System.out.println(ee.getMessage());


		// part 4 testing
		System.out.println("\nPart 4 Output :\n");
		CrazyException ce = new CrazyException();
		System.out.println(ce.getMessage());
		ce.crazyMethod();



		// part 5 testing
		System.out.println("\nPart 5 Output :\n");
		try{
		    System.out.println("try block entered:");
		    int number = 42;
		    if (number > 0)
		        throw new DoubleException("DoubleException thrown!");
		    System.out.println("Leaving try block.");
		}
		catch(DoubleException de){
		    System.out.println(de.getMessage());
		}
		System.out.println("End of code.");


		// part 6 testing
		System.out.println("\nPart 6 Output :\n");
		IntException ie = new IntException(42);
		System.out.println(ie.getNumber());
		System.out.println(ie.getMessage());


	}
}