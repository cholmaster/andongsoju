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
        if((fd=open("buffer0",O_RDWR))<0) {
            perror("Open error");
	    counter *= 3;
        }
        if(close(fd)) {
            perror("Close error");
	    ioctl(fd,__CLEAR__,args);
	    counter *= 3;
        }
    }
    ioctl(fd,__SORT_DESCENDING__,args);
    sleep (counter);
    ioctl(fd,__SORT_ASCENDING__,args);
    sleep (counter);
}
