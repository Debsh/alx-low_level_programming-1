#include <stdio.h>
#include <unistd.h>
/**
 * main - This function runs first
 *
 * Return: Return integer numbers
 */
int main(void)
{
char sent[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2,  sent, sizeof(sent));
write(2, "\n", 2);
return (1);
}
