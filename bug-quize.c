#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// sample1 

int simple_example(int c) {
  void *p = malloc(10);
  if(c)
    return -1;
  /* ... */
  free(p);
  return 0;
}


// sample2 

void print(int srcId, int dstId){
    printf("source Id is %d. \n", srcId);
    printf("destination Id is %d. \n", dstId);
}

void test() {
    int srcId = 1;
    int dstId = 2;
    print(dstId, srcId);
}


// sample3 
int square(int x) {
    return x*x;
}

int example(int a, int b, int x, int y) {
    int result = 0;
    if (a > 0) {
        result = square(a) + square(x);
    }
    if (a > 0) {
        result = square(b) + square(y);
    }
    return result;
}

// sample4 

void do_long_work()
{
	simple_example(10);
	test();
	example(1,2,3,4);
}

void calc_time() { 
    int starttime = time(NULL);
    do_long_work();
    int endtime = time(NULL); 
    printf("Time elapsed = %d seconds\n", endtime - starttime);
}

void main()
{
	calc_time();
}
