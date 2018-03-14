//: concurrency/Chopstick.java
package concurrency; /* Added by Eclipse.py */
// Chopsticks for dining philosophers.

//拿筷子时标识状态为true.连续wait;
//放下筷子,状态改为false
public class Chopstick {
  private boolean taken = false;
  public synchronized
  void take() throws InterruptedException {
    while(taken)
      wait();
    taken = true;
  }
  public synchronized void drop() {
    taken = false;
    notifyAll();
  }
} ///:~
