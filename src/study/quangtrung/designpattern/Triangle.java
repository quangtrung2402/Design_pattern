package study.quangtrung.designpattern;

public class Triangle implements Shape{

	double a, b;
	public Triangle(double a, double b) {
		this.a = a;
		this.b = b;
	}

	@Override
	public double area() {
		return a*b/2;
	}

}
