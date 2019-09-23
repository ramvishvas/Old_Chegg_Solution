
package mytest;
// Animal is an abstract class because "animal" is conceptual
// for our purposes. We can't declare an instance of the Animal class,
// but we will be able to declare an instance of any concrete class
// that derives from the Animal class.
abstract class Animal {
	// All animals have a name, so store that info here in the superclass.
	// And make it private so that other programmers have to use the
	// getter method to access the name of an animal.
	private final String animalName;
	// One-argument constructor requires a name.
	public Animal(String aName) {
		animalName = aName;
	}
	// Return the name of the animal when requested to do so via this
	// getter method, getName().
	public String getName() {
		return animalName;
	}
	// Declare the makeSound() method abstract, as we have no way of knowing
	// what sound a generic animal would make (in other words, this
	// method MUST be defined differently for each type of animal,
	// so we will not define it here--we will just declare a placeholder
	// method in the animal superclass so that every class that derives from
	// this superclass will need to provide an override method
	// for makeSound()).
	public abstract String makeSound();
};


// Create a concrete subclass named "Dog" that inherits from Animal.
// Because Dog is a concrete class, we can instantiate it.
class Dog extends Animal {
// This constructor passes the name of the dog to
// the Animal superclass to deal with.
	public Dog(String nameOfDog) {
		super(nameOfDog);
	}
	// This method is Dog-specific.
	@Override
	public String makeSound() {
		return ("Woof");
	}
}


// Create a concrete subclass named "Cat" that inherits from Animal.
// Because Cat is a concrete class, we can instantiate it.
class Cat extends Animal {
	// This constructor passes the name of the cat on to the Animal
	// superclass to deal with.
	public Cat(String nameOfCat) {
		super(nameOfCat);
	}
	// This method is Cat-specific.
	@Override
	public String makeSound() {
		return ("Meow");
	}
}


class Bird extends Animal {
	// This constructor passes the name of the bird on to the Animal
	// superclass to deal with.
	public Bird (String nameOfBird) {
		super(nameOfBird);
	}
	// This method is Bird-specific.
	@Override
	public String makeSound() {
		return ("Squawk");
	}
}


public class MyTest {
	public static void main(String[] args) {
		// Create an instance of the Dog class, passing it the name "Spot."  
		// The variable aDog that we create is of type Animal.
		Animal aDog = new Dog("Spot");
		// Create an instance of the Cat class, passing it the name "Fluffy."  
		// The variable aCat that we create is of type Animal.
		Animal aCat = new Cat("Fluffy");
		// Create an instance of (instantiate) the Bird class.
		Animal aBird = new Bird("Tweety");
		//Exercise two different methods of the aDog instance:
		// 1) getName() (which was defined in the abstract Animal class)
		// 2) makeSound() (which was defined in the concrete Dog class)
		System.out.println("The dog named " + aDog.getName() + " will make this sound: " + aDog.makeSound());
		//Exercise two different methods of the aCat instance:
		// 1) getName() (which was defined in the abstract Animal class)
		// 2) makeSound() (which was defined in the concrete Cat class)
		System.out.println("The cat named " + aCat.getName() + " will make this sound: " + aCat.makeSound());
		System.out.println("The bird named " + aBird.getName() + " will make this sound: " + aBird.makeSound());
	}
}