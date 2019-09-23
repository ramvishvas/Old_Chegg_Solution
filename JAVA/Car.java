public class Car
{
	private int yearModel;
	private String make;
	private int speed;
	// default coustructor
	public Car()
	{
		this.yearModel = 2000;
		this.make = "Nissan";
		this.speed = 4;
	}
	// constructor overloading
	public Car(int yearModel, int speed, String make)
	{
		this.yearModel = yearModel;
		this.make = make;
		this.speed = speed;
	}
	// getters
	public int getYearModel()
	{
		return yearModel;
	}
	public String getMake()
	{
		return make;
	}
	public int getSpeed()
	{
		return speed;
	}

	// setters
	public void setYearModel(int yearModel)
	{
		this.yearModel = yearModel;
	}
	public void setMake(String make)
	{
		this.make = make;
	}
	public void setSpeed(int speed)
	{
		this.speed = speed;
	}

	// to Strig method
	@Override
    public String toString() 
    { 
        return "YearModel: "+yearModel+", Make: "+make+", Speed: "+speed;
    } 
	public static void main(String[] args) 
	{
		Car obj1 = new Car();
		System.out.println(obj1);
		obj1.setYearModel(2018);
		obj1.setMake("ABCD");
		obj1.setSpeed(20);

		System.out.println(obj1);

		System.out.println(obj1.getYearModel());
		System.out.println(obj1.getMake());
		System.out.println(obj1.getSpeed());


		Car obj2 = new Car(2019, 10, "Nissan");
		System.out.println(obj2);		
	}	
}