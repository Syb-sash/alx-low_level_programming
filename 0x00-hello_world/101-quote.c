#include<stdio.h>
#include<unistd.h>

/**
 * main - writes a quote,date of publish and author
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (1);
}

