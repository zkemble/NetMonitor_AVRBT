/*

#include "common.h"

byte remap(byte x, byte in_min, byte in_max, byte out_min, byte out_max)
{
	return (((long)x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min);
}

int remapInt(int x, int in_min, int in_max, int out_min, int out_max)
{
	return (((long)x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min);
}

uint limitVal(uint val, uint min, uint max)
{
	if(val < min)
		return min;
	else if(val > max)
		return max;
	else
		return val;
}