#include <unistd.h>

main()
{
	int x;
	x=0;
	while(1) {
		if (x==1000000000) {
		printf("%d\n", x);
		exit(0);
		}
		x=x+1;
	}
	return(0);
}

