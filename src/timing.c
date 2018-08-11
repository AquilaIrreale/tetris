#include <config.h>

#include "timing.h"

unsigned long int secs()
{
	return clock()/CLOCKS_PER_SEC;
}

unsigned long int millis()
{
	return clock()/CLOCKS_PER_MSEC;
}

unsigned long int micros()
{
	return clock()/CLOCKS_PER_USEC;
}

void waits(unsigned int s)
{
	int start = secs();
	while (secs() - start < s);
	return;
}

void waitm(unsigned int m)
{
	int start = millis();
	while (millis() - start < m);
	return;
}

void waitu(unsigned int u)
{
	int start = micros();
	while (micros() - start < u);
	return;
}


