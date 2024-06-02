#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/ioctl.h>
#include <stdatomic.h>
#include <stdbool.h>
#include "buffer_io.h"
typedef atomic_int aint;
int counter = 1000;
int main (aint argc, char **argv)
{
    aint fd;
    __BUF__ args;
    while(true) {
        if(argc<2) {
            return 1;
        }
        if((fd=open(argv[1],O_RDWR))<0) {
            perror("Open error");
	    counter *= 3;
        }
        ioctl(fd,__SORT_DESCENDING__,args);
        if(close(fd)) {
            perror("Close error");
	    counter *= 3;
        }
    }
    sleep (counter);
}
