#ifndef F1_C
#define F1_C

#include "F1.h"

int main( int argc, char *argv[] )
{
  printf("\n");
  characteristic("1000", 0);
  printf("\n");
}

bool characteristic(char numString[], int c)
{
  int index;


  if(numString[0] - '0' >= 1 && numString[1] - '0' >= 0 && numString[2] - '0' >= 0)
  {
    c = 351;
  }

  for(index=0; numString[index]!='\0'; index++)
  {
      // printf("%c", numString[index]);
      // printf("%i", c);
  }

  return false;
}

bool mantissa(char numString[], int numerator, int denominator) {
  return false;
}

int endIndex(char numString[])
{
  int index;

  for(index = 0; numString[index] != '\0'; index++)
  {

  }

  return 0;
}


#endif
