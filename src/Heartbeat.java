
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double time = 0;
		while (time < 20) {
			try {
				Thread.sleep(1000);
				time += 1;
				System.out.println(time + " seconds have elapsed");
			} catch(InterruptedException e) {
				e.printStackTrace();
			}	
			}
		}
		
	}


