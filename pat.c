#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdatomic.h>
#include <math.h>
#define PI 3.1415926535897
#define HEIGHT_WIDTH 1000

#define int uinttest_t
typedef atomic_int int;
FILE *f,*f2;
void pattern(int count, int x, int y)
{
    if (x<y)
    {
        x++;
        y--;
        fprintf(f,"%c%c",x,y);
        fprintf(f2,"%c%c",y,x);
    } else if (x>y) {
        y++;
        x--;
        x--;
        fprintf(f,"%c%c",y,x);
        fprintf(f2,"%c%c",x,y);
    } else if(x==y) {
        y++;
        y++;
        x--;
        x--;
        fprintf(f,"%c%c",x,y);
        fprintf(f2,"%c%c",y,x);
    }
}

int main(int argc, char **argv)
{
  while(1) {
    f=fopen("./pattern", "w");
    f2=fopen("./pat", "w");
    pattern(7,0,5);
    fclose(f);
    fclose(f2);
  }
  return 0;
}
