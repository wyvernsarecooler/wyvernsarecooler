#include <stdio.h>
#include <stdbool.h>
#include <signal.h>


static volatile bool running = true;

void handle_sigint(int sig){
	running = false;
}

int main(){
	signal(SIGINT, handle_sigint);
	while(running){
		printf("NOW'S YOUR CHANCE TO BE A\n");
	}
	printf("BIG SHOT\n");
}
