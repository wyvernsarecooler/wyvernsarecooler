public class BeA{
	public static volatile boolean running = true;

	public static void main(String[] args){
		Runtime.getRuntime().addShutdownHook(new Thread(){
			public void run(){
				BeA.running = false;
			}
		});
		while(BeA.running){
			System.out.println("NOW'S YOUR CHANCE TO BE A");
		}
		System.out.println("BIG SHOT");
	}

}
