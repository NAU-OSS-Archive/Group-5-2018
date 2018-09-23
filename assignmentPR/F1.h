#ifndef F1_H
#define F1_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] );

bool characteristic(char numString[], int c);
bool mantissa(char numString[], int numerator, int denominator);
int endIndex(char numString[]);
void whitespace(char str[]);


#endif
