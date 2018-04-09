public class MainTest {
	public void func1() {
		System.out.println("func1");
	}
	
	public void func2() {
		System.out.println("func2");
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MainTest maintest=new MainTest();
		synchronized (maintest) {
			maintest.func1();
			synchronized (maintest) {
				maintest.func2();
			}
		}	
	}
}
