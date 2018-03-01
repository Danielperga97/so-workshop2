#include <stdio.h>
#include <sys/time.h>
#include <time.h>

void print_time(){
struct timeval tv;
struct tm* ptm;
char time_string[40];
long milliseconds;

gettimeofday(&tv, NULL);
ptm=localtime(&tv.tv_sec);

strftime(time_string, sizeof(time_string),"%Y-%m-%d %H:%M:%S",ptm);
milliseconds=tv.tv_usec / 1000;
printf("%s.%031d\n", time_string, milliseconds);
}
int main(void){
print_time();}
