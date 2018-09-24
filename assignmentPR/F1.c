#ifndef F1_C
#define F1_C

#include "F1.h"

int main( int argc, char *argv[] )
{
  characteristic(" -505.00\0", 0);
  printf("\n");
}

bool characteristic(char numString[], int c)
{
  int index;
  int newIndex = 0;
  bool negative = false;
  bool firstDigit = false;
  char newNum[40] = "";

  for(index = 0; numString[index] != '\0'; index++)
  {
      // Store only number and sign into new character array
      if(numString[index] != ' ' && numString[index] != '+'
        && numString[index] != '-')
      {
        // Establish what the first integer is and store into c
        if(isdigit(numString[index]) != 0 && firstDigit == false)
        {
          c = numString[index] - '0';
          firstDigit = true;
        }

        // Any character after the first number that isn't a decimal will mean
        // the string is invalid
        if(firstDigit == true && numString[index] != '.' && isdigit(numString[index] == 0))
        {
          printf("Invalid string");
          return false;
        }

        newNum[newIndex] = numString[index];
        newIndex++;
      }

      // Detect for letters, an obvious invalid string
      if(isalpha(numString[index]) != 0)
      {
        printf("Invalid string");
        return false;
      }

      if(numString[index] == '-')
      {
        negative = true;
      }
  }

  if(negative == true)
  {
    c = -c;
  }

  printf("(c=%i)", c);
  return true;
}

bool mantissa(char numString[], int numerator, int denominator) {

  int m;

  if(numString[0] - '0' >= 1 && numString[1] - '0' >= 0 && numString[2] - '0' >= 0)
  {
    m = 351;
    printf("\n351");
  }


  return false;
}


#endif
