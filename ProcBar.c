#include "ProcBar.h"

void process_bar()
{
	int i = 0;
	char bar[NUM];
	memset(bar, '\0' ,sizeof(bar));
	const char *lable="|/-\\";
	while(i <= 100 ){
		printf("[%-100s][%d%%][%c]\r", bar, i, lable[i%4]);
		fflush(stdout);
		bar[i++] = '#';
		usleep(10000);
	}
	printf("\n");
}
