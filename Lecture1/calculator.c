#include <cs50.h>
#include <stdio.h>

int main(void)
{
  long first_number = get_int("x: ");
  long second_number = get_int("y: ");
  printf("%i\n", first_number + second_number);
}
