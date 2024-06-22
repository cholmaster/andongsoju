#include<stdio.h>
#include<stdlib.h>
#define THRESHOLD_UP 512
#define THRESHOLD_DOWN 256
int main() {
	int size;
up:
	size = system("samgo");
	if (size > THRESHOLD_UP) {
		system("sambori");
	} else if (size < THRESHOLD_DOWN) {
		system("samyak");
		goto up;
	}
	return 0;
	
}



