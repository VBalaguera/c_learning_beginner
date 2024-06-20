#include <stdio.h>  // Include the standard input/output library
#include <stdlib.h> // Include the standard library

// variables

int main()
{

  // variables need:
  /// data type
  /// name
  /// value
  char elementName[] = "line";
  int elementCount = 5;
  char anotherElement[] = "triangle";

  printf("This is %s one.\n", elementName);
  printf("This is another %s\n", elementName);
  printf("This is the third %s.\n", elementName);
  printf("This is last elementName.\n");

  elementCount = 10; // changing the value of elementCount

  printf("In total, we had %d instances of %s. However, %s was jealous...\n", elementCount, elementName, anotherElement);

  return 0;
}