// Created by Carli Martinez
// Written September 23, 2018

#ifndef F1_H
#define F1_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main( int argc, char *argv[] );

// Checks if invalid and sets first digit to c
bool characteristic(char numString[], int c);
// Checks if invalid and assigns mantissa
bool mantissa(char numString[], int numerator, int denominator);
// Looks for characters that will cause conversion erros
bool invalidCheck(char numString[]);


#endif
