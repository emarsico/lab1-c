// Author : Elliot Marsico eam6077@psu.edu
// Collaborator : Kunmao Yu kyz5155@psu.edu
// Collaborator : Michael Scarpitta mss6102@psu.edu
// Collaborator : Kunmao Yu kyz5155@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *tempstr = readline("Enter temperature in celsius: ");
  double cel = atof(tempstr);
  double fahr = cel*1.8+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit. \n", cel, fahr);
  return 0;
}