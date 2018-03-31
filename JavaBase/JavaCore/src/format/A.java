package format;

public class A {

	void f(int a) {
		System.out.print("a");
	}
	void f(Character b) {
		System.out.print("b");

	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		A a=new A();
		a.f('c');

	}

}
