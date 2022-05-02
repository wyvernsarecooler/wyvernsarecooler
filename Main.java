public class Main{
	public static volatile boolean running = true;

	public static void main(String[] args){
		Runtime.getRuntime().addShutdownHook(new Thread(){
			public void run(){
				Main.running = false; System.out.println("BIG SHOT");
				}
			});
		while(Main.running){
			System.out.println("NOW'S YOUR CHANCE TO BE A");
		}
	}

}
