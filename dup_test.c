#include "header.h"
#include <unistd.h>

int
main(void)
{
	int fd, k = 10;

	for(;k!=0;k--){
		fd = dup(1);
		printf("%d\n", fd);
	}

	return 0;
}
