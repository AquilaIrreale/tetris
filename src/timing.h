#ifndef _TIMING_H_
	#define _TIMING_H_

#include <time.h>

#define CLOCKS_PER_MSEC (CLOCKS_PER_SEC/1000)
#define CLOCKS_PER_USEC (CLOCKS_PER_SEC/1000000)

unsigned long int secs();
unsigned long int millis();
unsigned long int micros();

void waits(unsigned int s);
void waitm(unsigned int m);
void waitu(unsigned int u);

#endif /* _TIMING_H_ */


