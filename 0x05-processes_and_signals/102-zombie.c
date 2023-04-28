#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>


/**
 * infinite_while - functions that runs an infinite  while loop
 * Return: always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - function that creates five Zombie  process
 * Return: always 0
 */
int main(void)
{
	for (i = 0; i < 5; i++)
	{
		pid = fork();

		if (pid == 0)
		{
			printf("Zombie process created, PID: %d\n" getpid());
			return (0);
		}
		else if (pid > 0)
		{
			sleep(1);
		}
		else
		{
			perror("fork!");
			return (1);
		}
	}

	return (0);
}
