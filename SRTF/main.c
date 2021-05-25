#include <stdio.h>
#include <stdlib.h>
#include "srtf.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	ProcessList pl = newProcessList(10);
	addCProcess(pl,1,3,1,0,0);
	displayProcess(pl->pl[0]);
	addCProcess(pl,2,1,4,0,0);
	displayProcess(pl->pl[1]);
	addCProcess(pl,3,4,2,0,0);
	displayProcess(pl->pl[2]);
	addCProcess(pl,4,0,6,0,0);
	displayProcess(pl->pl[3]);
	addCProcess(pl,5,2,3,0,0);
	displayProcess(pl->pl[4]);
	displayProcessList(pl);
	printf("		STARTING Processes\n\n");
	
	processSRTF(pl);
	
	destroyProcessList(&pl);
	
	return 0;
}
