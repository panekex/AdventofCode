/* ******************************************************************** */
/* 									*/
/* 							  .-""-.	*/
/* 	Day1.c  					 /,..___\	*/
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

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

void read_file(const char *filename, int *arr1, int *arr2) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    int i = 0;
    while (i < 1000 && fscanf(file, "%d %d", &arr1[i], &arr2[i]) == 2) {
        i++;
    }

    fclose(file);
}

int main() 
{
    int lines = 1000;
    int arr1[lines];
    int arr2[lines];
    int result = 0;

    read_file("input.txt", arr1, arr2);

    qsort(arr1, lines, sizeof(int), compare);
    qsort(arr2, lines, sizeof(int), compare);

    for (int i = 0; i < lines; i++) 
    {
	    if (arr1[i] > arr2[i])
	    	result += (arr1[i] - arr2[i]);
	    else
		result += (arr2[i] - arr1[i]);
    }
    printf("%d\n", result);

    return 0;
}
