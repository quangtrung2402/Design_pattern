package study.quangtrung.designpattern;

public class Place {

	String address;
	Shape domain;
	public Place(String address, Shape domain) {
		this.address = address;
		this.domain = domain;
	}
	
	public void area() {
		double area =  this.domain.area();
		System.out.println("The area of " + this.address + " is " + area);
	}
	
	public static void main(String[] args) {
		Place placeA = new Place("school", new Rectangle(4.0, 6.0));
		Place placeB = new Place("yard", new Triangle(3.0, 6.0));
		placeA.area();
		placeB.area();
	}
}
