/*
** EPITECH PROJECT, 2018
** hidenp
** File description:
** check the content
*/

#include <unistd.h>

int my_strlen(char const *str)
{
	int a = 0;

	for (int i = 0 ; str[i] != '\0' ; i++) {
		a++;
	}
	return (a);
}

void to_print(char **av, int match)
{
	if (match == my_strlen(av[1]))
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}

int hidenp(char **av)
{
	int i;
	int j;
	int match = 0;

	i = 0;
	j = 0;
	while (av[1][i] != '\0') {
		while (av[2][j] != '\0') {
			if (av[1][i] == av[2][j]) {
				j++;
				match++;
				break;
			}
			j++;
		}
		i++;
	}
	to_print(av, match);
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 3) {
		write(2, "Error: missing arguments.\n", 27);
		return (84);
	}
	hidenp(av);
	return (0);
}
