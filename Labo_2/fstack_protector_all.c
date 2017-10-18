/*
 * (C) Copyright 2000
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <stdio.h>
#include <stdlib.h>

unsigned char localBufferOverflow (void)
{
	unsigned char val [16];
	int i;

	for (i=0; i< 40; i++)
	{
		val[i] = 'a';
	}

	return val[0];
}

int main (int argc, char * const argv[])
{
	printf("Value[0] = %c\n", localBufferOverflow());
	return 0;
}
