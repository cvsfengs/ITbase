package format;

import java.util.concurrent.CountDownLatch;

public class LatchTest {
	synchronized  void  a(){
		CountDownLatch countDownLatch = new CountDownLatch(1);
		  // do someing
		System.out.println("AAAA");
		
		try {
			countDownLatch.await();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		}

		synchronized void b(){
			CountDownLatch countDownLatch = new CountDownLatch(1);
			System.out.println("BBB");

//			try {
//				//countDownLatch.await();
//			} catch (InterruptedException e) {
//				// TODO Auto-generated catch block
//				e.printStackTrace();
//			}
		}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LatchTest latch=new LatchTest();
		LatchTest latch1 = new LatchTest();
		new Thread(new Runnable() {

			@Override
			public void run() {
				// TODO Auto-generated method stub
				latch.a();
			}
			
			
		}).start();
		
		new Thread(new Runnable() {

			@Override
			public void run() {
				// TODO Auto-generated method stub
				latch1.b();
			}
			
			
		}).start();

		
		
		
		
		
	}
	
	

}
