#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	time_t timer;
	time(&timer);

	printf("Local time is: %s", ctime(&timer));
	exit(0);
}
