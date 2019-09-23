// YOUR CODE STARTS HERE
// Modify this function according to the specification
void shapeCalculator(int shape) 
{
  if (shape == CIRCLE){
    double aCircle = areaCircle(RADIUS);
    double pCircle = periCircle(RADIUS);
    printf(FORMAT, shape, "Circle", "Area", aCircle);
    printf(FORMAT, shape, "Circle", "Perimeter", pCircle);
  }
  else if (shape == SPHERE){
  	double vSphere = volSphere(RADIUS);
  	double sSphere = surfaceSphere(RADIUS);
    printf(FORMAT, shape, "Sphere", "Volume", vSphere);
    printf(FORMAT, shape, "Sphere", "Surface", sSphere);
  }
  else if(shape == CYLINDER){
  	double vCylinder = volCylinder(RADIUS, HEIGHT);
  	double sCylinder = surfaceCylinder(RADIUS, HEIGHT);
  	printf(FORMAT, shape, "Cylinder", "Volume", vCylinder);
    printf(FORMAT, shape, "Cylinder", "Surface", sCylinder);
  }
  else if(shape == CONE){
  	double vCone = volCone(RADIUS, HEIGHT);
  	double sCone = surfaceCone(RADIUS, HEIGHT);
  	printf(FORMAT, shape, "Cone", "Volume", vCone]);
    printf(FORMAT, shape, "COne", "Surface", sCone);
  }
  else {
    printf(ERRMSG, shape);
  }//cascaded if
}// shapeCalculator
// YOUR CODE ENDS HERE
-------------------------------------------