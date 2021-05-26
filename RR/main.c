#include <stdio.h>
#include <stdlib.h>
#include "rr.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	ProcessList pl = newProcessList(10);
	addCProcess(pl,1,0,21,0,0);
	displayProcess(pl->pl[0]);
	addCProcess(pl,2,0,3,0,0);
	displayProcess(pl->pl[1]);
	addCProcess(pl,3,0,6,0,0);
	displayProcess(pl->pl[2]);
	addCProcess(pl,4,0,2,0,0);
	displayProcess(pl->pl[3]);
	displayProcessList(pl);
	printf("		STARTING Processes\n\n");
	
	processRR(pl,5);
	
	destroyProcessList(&pl);
	
	return 0;
}
