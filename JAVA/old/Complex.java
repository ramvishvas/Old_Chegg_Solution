import java.util.Scanner;
import java.math.BigDecimal;
import java.math.RoundingMode;

public class Complex {
 	// double real; 
	// double imaginary; 
	BigDecimal real, imaginary;

 	public Complex(BigDecimal real, BigDecimal imaginary) {
  		this.real = real; 
  		this.imaginary = imaginary; 
  	} 

  	public String toString(){ 
  		if(this.real.equals(BigDecimal.ZERO)){ 
  			return this.imaginary + "i"; 
  		} else if (this.imaginary.equals(BigDecimal.ZERO)){ 
  			return this.real + "" ; 
  		} else if(this.imaginary.compareTo(BigDecimal.ZERO) < 0){ 
  			return "(" + this.real + " - " + imaginary.abs() + "i" + ")"; 
  		} 
  		return "(" + this.real + " + " + imaginary.abs() + "i" + ")"; 
  	} 


  	public static Complex add(Complex num1 , Complex num2){ 
  		return new Complex(num1.real.add(num2.real), num1.imaginary.add(num2.imaginary)); 
  	} 

  	public static Complex subtract(Complex num1, Complex num2){ 
  		return new Complex(num1.real.subtract(num2.real), num1.imaginary.subtract(num2.imaginary));
  	} 

  	public static Complex multiply(Complex num1, Complex num2){ 
  		Complex temp = new Complex(BigDecimal.ZERO, BigDecimal.ZERO); 
  		//(a + bi) * ( c + di) = ( ac - bd ) + (ad + bc )i 
  		temp.real = (num1.real.multiply(num2.real) ).subtract((num1.imaginary.multiply(num2.imaginary)) ); 
  		temp.imaginary = (num1.real.multiply(num2.imaginary)).add((num2.real.multiply(num1.imaginary)) ); 
  		return temp; 
  	}

  	public static Complex divide(Complex num1, Complex num2){ 
  			BigDecimal temp = (num2.real.multiply( num2.real)).add((num2.imaginary.multiply(num2.imaginary))); 
  			if (temp.equals(BigDecimal.ZERO)) 
  				return new Complex(null, null); 
  			// return new Complex(((num1.real * num2.real) + (num1.imaginary * num2.imaginary)) / temp, 
  			//                    ((num1.imaginary * num2.real) - (num1.real * num2.imaginary)) / temp); 

  			return new Complex(((num1.real.multiply(num2.real)).add((num1.imaginary.multiply(num2.imaginary)))).divide(temp,2, RoundingMode.HALF_UP), 
  				              ((num1.imaginary.multiply(num2.real)).subtract(num1.real.multiply(num2.imaginary))).divide(temp,2, RoundingMode.HALF_UP)); 
  			

  			// return new Complex(BigDecimal.ZERO, BigDecimal.ZERO); 
  	} 

  	public static boolean testForEquality(Complex num1, Complex num2){ 
  		if(num1.real.equals(num2.real) && num1.imaginary.equals(num2.imaginary)){ 
  			return true; 
  		} 
  		return false; 
  	} 

  	public static void main(String[] args) { 
  		Scanner reader = new Scanner(System.in); 
  		// double real; 
  		// double imaginary; 
  		BigDecimal real, imaginary;

  		System.out.print("Enter first real part: "); 
  		// real = Double.parseDouble(reader.nextLine());
  		real = reader.nextBigDecimal() ;

  		System.out.print("Enter first imaginary part: "); 
  		// imaginary = Double.parseDouble(reader.nextLine());
  		imaginary = reader.nextBigDecimal() ; 

  		Complex num1 = new Complex(real,imaginary); 
  		System.out.println("1st Number Is :\t"+num1);

  		System.out.print("Enter second real part: "); 
  		// real = Double.parseDouble(reader.nextLine()); 
  		real = reader.nextBigDecimal() ;

  		System.out.print("Enter second imaginary part: "); 
  		// imaginary = Double.parseDouble(reader.nextLine());
  		imaginary = reader.nextBigDecimal() ; 

  		// Complex num2 = new Complex(real,imaginary); 
  		Complex num2 = new Complex(real,imaginary); 
  		System.out.println("2nd Number Is :\t"+num2);

  		System.out.println("\nPerforming arithmetic operations ....\n"); 
  		System.out.println(num1 + " + " + num2 + " = " + add(num1,num2)); 
  		System.out.println(num1 + " - " + num2 + " = " + subtract(num1,num2)); 
  		System.out.println(num1 + " * " + num2 + " = " + multiply(num1,num2)); 
  		System.out.println(num1 + " / " + num2 + " = " + divide(num1,num2)); 
  		if(testForEquality(num1,num2)){ 
  			System.out.println(num1 + " = " + num2); 
  		} else { 
  			System.out.println(num1 + " != " + num2); 
  		} 
  	} 
}


// Assume a and b are BigDecimal then -->>
// a+b --> a.add(b);
// a-b --> a.subtract(b);
// a*b --> a.multiply(b);
// a/b --> a.divide(b,k,RoundingMode.HALF_UP); where k is precision and RoundingMode.HALF_UP is rounding mode
// abs(a) --> a.abs();