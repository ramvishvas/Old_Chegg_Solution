import java.util.Scanner;

interface stack {
	boolean isEmpty();
	boolean isFull();
	int size(); //this should return number of data elements
	void push (Object item);
	Object pop();
	Object top();
}

class ArrayStack implements stack{
	private int size = 10;
	private int top =-1; // initial top index
	private Object[] array = new Object[size];

	public boolean isEmpty(){
		if (top == -1) { // if top is -ve that means stack is empty
			return true;
		}
		return false;
	}
	public boolean isFull(){
		if (top == size-1) { // if top+1 == size means array is full
			return true;
		}
		return false;
	}
	public int size(){
		if (this.isEmpty()) {
			return -1;
		}
		return top+1;
	}

	public Object pop(){
		if (this.isEmpty()) {
			System.out.println("Error!!! No Object to pop");
			return null;
		}
		return array[top--];
	}
	public Object top(){
		if (this.isEmpty()) {
			return null;
		}
		return array[top];
	}

	// push only if array is not full
	public void push (Object item){
		if (this.isFull()) { // is array full
			System.out.println("Error!!! Stack Overflow");
			return;
		}
		array[++top] = item;
	}
}

class Evaluate {
  	public static int expression(String str) {
        // return the value
        return 0;
  	}
}


public class ArrayStackTestDrive{
	public static void main(String[] args) {
		ArrayStack obj = new ArrayStack();
		System.out.println(obj.isEmpty());
		System.out.println(obj.isFull());
		System.out.println(obj.size());
		System.out.println(obj.top());
		System.out.println(obj.pop());

		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		obj.push(10);
		System.out.println("\n");
		
		System.out.println(obj.isEmpty());
		System.out.println(obj.isFull());
		System.out.println(obj.size());
		System.out.println(obj.top());
		System.out.println(obj.pop());
		System.out.println(obj.top());
		System.out.println(obj.size());
	}
}