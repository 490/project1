#include <stdio.h>

int main(){
	int i = 0;
	printf("I AM RUNNING!~!~!~!~\n");
	while(i<20){
		i=i+1;
		sleep(1);
		printf("I am running %d seconds.\n", i);
		fflush(stdout);
	}
	printf("I am ending.\n");
	
}
