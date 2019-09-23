class Point2D {
    private double x = 0;
    private double y = 0;

    public Point2D(double x, double y){
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return this.x;
    }
    public double getY() {
        return this.y;
    }

    public double distanceOrigin(){
        return Math.sqrt(x*x + y*y);
    }

    public String position(){
		return "Point("+getX()+", "+getY()+")";    
    }

    public String toString() {
        return this.position()+" and distance from origin is "+distanceOrigin(); 
    }   

    public double distancePoint(Point2D point){
        return Math.sqrt((getX() - point.getX())*(getX() - point.getX()) 
        	           + (getY() - point.getY())*(getY() - point.getY()));
    }
}

class Point3D extends Point2D{
	private double z=0;
	public Point3D(double x, double y, double z){
        super(x, y);
        this.z = z;
    }

    public double getZ() {
        return this.z;
    }

    @Override
    public double distanceOrigin(){
        return Math.sqrt(getX()*getX() + getY()*getY() + getZ()*getZ());
    }

    @Override
    public String position(){
		return "Point("+getX()+", "+getY()+", "+getZ()+")";    
    }

    public double distancePoint(Point3D point){
        return Math.sqrt((getX() - point.getX())*(getX() - point.getX()) 
        	           + (getY() - point.getY())*(getY() - point.getY())
        	           + (getZ() - point.getZ())*(getZ() - point.getZ()));
    }
}

public class Point
{
	public static void main(String[] args) {
		Point2D obj2d1 = new Point2D(0, 4);
		Point2D obj2d2 = new Point2D(3, 0);

		System.out.println(obj2d1.toString());
		System.out.println(obj2d2.toString());
		System.out.println("Distance between point: "+obj2d1.distancePoint(obj2d2)+"\n");

		Point3D obj3d1 = new Point3D(0, 4, 1);
		Point3D obj3d2 = new Point3D(3, 0, 1);

		System.out.println(obj3d1.toString());
		System.out.println(obj3d2.toString());
		System.out.println("Distance between point: "+obj3d1.distancePoint(obj3d2));
	}
}

