/* ******************************************************************** */
/* 									*/
/* 							  .-""-.	*/
/* 	Filename					 /,..___\	*/
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

char *read_file_to_str(const char *filename)
{
    FILE *file;
    char *buffer;
    long length;

    file = fopen(filename, "r");
    if (!file)
        return NULL;

    fseek(file, 0, SEEK_END);
    length = ftell(file);
    rewind(file);

    buffer = (char *)malloc(length + 1);
    if (!buffer)
    {
        fclose(file);
        return NULL;
    }

    fread(buffer, 1, length, file);
    buffer[length] = '\0';

    fclose(file);
    return buffer;
}


int	main(int argc, char *argv[])
{
	int	j;
	int	counter;
	FILE *file = fopen("input.txt", "rb");
	
	char *str = read_file(file);
	counter = 0;
	j = 0;
	while(str[j] != '\0')
	{
		if (str[j] == 'm' && str[j + 1] == 'u' && str[j + 2] == 'l' && str[j + 3] == '(')
		{
			counter++;	
		}
		j++;
	}
	printf("%i", counter);
}
