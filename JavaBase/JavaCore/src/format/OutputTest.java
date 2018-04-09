package format;

public class OutputTest {

	public void func1() {
		System.out.println("func1");

	}
	
	public void func2() {
		System.out.println("func2");

	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	
		OutputTest outputtest=new OutputTest();
		synchronized (outputtest) {
			outputtest.func1();
			
			synchronized (outputtest) {
				outputtest.func2();
			}
			
		}	
		
//		System.out.printf("+0%,.2f\n",10000.0/3);
		
		
//		Scanner in = new Scanner(System.in);
//		String nameByScanner = in.nextLine();
//		System.out.println("a " + nameByScanner);
		
		//$
//		System.out.format("格式参数$的使用：%1$d,%2$s\n", 99,"abc");
//		//+使用  
//	    System.out.printf("显示正负数的符号：%+d与%d%n\n", 99,-99);  
//	    //补O使用  
//	    System.out.printf("最牛的编号是：%03d%n\n", 7);  
//	    //空格使用  
//	    System.out.printf("Tab键的效果是：% 8d%n", 7);  
//	    //,使用  
//	    System.out.printf("整数分组的效果是：%,d%n", 9989997); 
//	    //空格和小数点后面个数  
//	    System.out.printf("一本书的价格是：% 50.5f元%n", 49.8);  
		
	}

}
