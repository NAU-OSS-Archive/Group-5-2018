#ifndef F1_C
#define F1_C

#include "F1.h"

int main( int argc, char *argv[] )
{
  mantissa(" 10000\0", 0, 0);
  printf("\n");
}

bool characteristic(char numString[], int c)
{
  int index;
  int newIndex = 0;
  bool negative = false;
  char newNum[40] = "";
  bool firstDigit = false;

  if(invalidCheck(numString) == false) {
    printf("Invalid string");
    return false;
  }

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

        newNum[newIndex] = numString[index];
        newIndex++;
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

  int index;
  int newIndex = 0;
  bool negative = false;
  char newNum[40] = "";

  if(invalidCheck(numString) == false) {
    printf("Invalid string");
    return false;
  }

  for(index = 0; numString[index] != '\0'; index++)
  {
      // Store only number and sign into new character array
      if(numString[index] != ' ' && numString[index] != '+'
        && numString[index] != '-')
      {

        newNum[newIndex] = numString[index];
        newIndex++;
      }

      if(numString[index] == '-')
      {
        negative = true;
      }
  }

  int mantissaNum;

  if(newIndex >= 1 && newNum[0] - '0' >= 1 && newNum[1] - '0' >= 0)
  {
    mantissaNum = 10;
    printf(" 10");
  }

  if(newIndex >= 3 && newNum[0] - '0' >= 1 && newNum[1] - '0' >= 0
  && newNum[2] - '0' >= 0 && newNum[3] - '0' >= 0)
  {
    mantissaNum = 351;
    printf(" 351");
  }

  if(newIndex >= 4 && newNum[0] - '0' >= 1 && newNum[1] - '0' >= 0
  && newNum[2] - '0' >= 0 && newNum[3] - '0' >= 0 && newNum[4] - '0' >= 0)
  {
    mantissaNum = 125;
    printf(" 125");
  }

  return true;

}

bool invalidCheck(char numString[]) {

  int index;
  bool firstDigit = false;
  bool status = true;

  for(index = 0; numString[index] != '\0'; index++)
  {
      if(numString[index] != ' ' && numString[index] != '+'
        && numString[index] != '-')
      {
        // Any character after the first number that isn't a decimal will mean
        // the string is invalid
        if(firstDigit == true && numString[index] != '.' && isdigit(numString[index] == 0))
        {
          status = false;
        }
      }

      // Detect for letters, an obvious invalid string
      if(isalpha(numString[index]) != 0)
      {
        status = false;
      }
  }

  return status;
}


#endif
