// if you have any doubt please let me know
class Account{
	private double balance;
	// Constructors
	public Account(double amount){
		balance = amount;
	}
	public Account(){
		this(0.0);
	}

	// Deposite
	public void deposite(double amount){
		balance += amount;
	}
	//Withdraw
	public void withdraw(double amount){
		balance -= amount;
	}

	// Get Balance
	public double getBalance(){
		return balance;
	}
}

class SafeAccount extends Account{
	private int attempts;
	// checking condition on amount for constructor and deposite
	public static double checkCondition(double amount){
		if (amount <= 0.0) {
			return 0.0;
		}
		return amount;
	}

	// constructor
	public SafeAccount(double amount){
		// calling parent constructor after applying checkCondition on amount
		super(checkCondition(amount));
		attempts = 0; // initilizing whenever object created
	}

	// deposite
	public void deposite(double amount){
		// calling parent deposite after applying checkCondition on amount
		super.deposite(checkCondition(amount));
	}
	// withdrawel
	public void withdraw(double amount){
		// cheking withdrawl is possible or not
		if (amount > super.getBalance()) {
			++attempts;// incrimenting attempts
			return;
		}else{
			// calling parent withdraw
			super.withdraw(amount);
		}
	}
	// return attempts
	public int overdraftAttempts(){
		return attempts;
	}
}

public class AccountDemo{
	public static void main(String[] args) {
		SafeAccount myAccount = new SafeAccount(10);

		myAccount.deposite(320.00);
		System.out.printf("Current balance: $%7.2f\n",myAccount.getBalance());

		myAccount.withdraw(80);
		System.out.printf("Remaining balance: $%7.2f OverDraft Attempts : $%d\n",myAccount.getBalance(), myAccount.overdraftAttempts());
		
		myAccount.deposite(-100.00);
		System.out.printf("Remaining balance: $%7.2f OverDraft Attempts : $%d\n",myAccount.getBalance(), myAccount.overdraftAttempts());
		
		myAccount.withdraw(800.00);
		System.out.printf("Remaining balance: $%7.2f OverDraft Attempts : $%d\n",myAccount.getBalance(), myAccount.overdraftAttempts());

	}
}