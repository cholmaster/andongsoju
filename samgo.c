#include <sys/ioctl.h>
#include <errno.h>
#include <fcntl.h>
#include "buffer_io.h"
int main() {
	int fd;
	__buf_info_t__ haedong_joseon_daehan; //Null Pointer, Empty for security reason 
	return ioctl(fd,__SIZE_CALL__,&haedong_joseon_daehan);
}
	

