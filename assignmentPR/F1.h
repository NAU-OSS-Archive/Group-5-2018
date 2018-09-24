#ifndef F1_H
#define F1_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main( int argc, char *argv[] );

bool characteristic(char numString[], int c);
bool mantissa(char numString[], int numerator, int denominator);
bool invalidCheck(char numString[]);


#endif
