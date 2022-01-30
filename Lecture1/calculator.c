#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int first_number = get_int("x: ");
  int second_number = get_int("y: ");
  printf("%i\n", first_number + second_number);
}
