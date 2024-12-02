/* ******************************************************************** */
/* 									*/
/* 							  .-""-.	*/
/* 	puzzle1.c					 /,..___\	*/
/* 							() {_____}	*/
/* 	By: gpaneque					  (/-@-@-\)	*/
/*  							  {`-=^=-'}	*/
/* 	Created: 1/12/2024				  {  `-'  }	*/
/* 	Edited: 1/12/2024				   {     }  	*/
/*    							    `---'	*/
/* 									*/
/* ******************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


int*	get_array(const char *stri, int *size)
{
	int	*arr = malloc(10 * sizeof(int));
	int	count = 0;
	char *end;

	while (*str)
	{
		arr[count] = strtol(str, &end, 10);
		if (str == end)
			break;
		str = end;
		count++;
	}

	*size = count;
	return arr;
}

int main()
{
	FILE *file = fopen("input2.txt", "r");

	char line[256];
	if (fgets(line, sizeof(line), file))
	{
		int	size;
		int
	}
	while (i < 1)
	{
		fgets(line, sizeof(line), file);
		get_array
		printf("%s", line);
		i++;
	}
	fclose(file);
	return (0);
}
