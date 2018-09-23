#ifndef F1_C
#define F1_C

#include "F1.h"

int main( int argc, char *argv[] )
{

}

bool characteristic(char numString[], int c)
{
  int index;
  // Remove spaces
  for(index=0; numString[index+1]!='\0'; index++)
      while((numString[index]) == ' ') {
      numString[index] = numString[index+1];
      index++;
  }

  if(numString[0] - '1' > 3 && numString[1] - '0' > 5 && numString[2] - '0' > 1)
  {
    c = 351;
    return false;
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
