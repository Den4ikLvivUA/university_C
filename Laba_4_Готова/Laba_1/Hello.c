#include<stdio.h>
#include<stdlib.h>
#define SIZE 200

void changeWord(char text[SIZE], int n, char word[5])
{
	int i, k, j;
	for (i = 0; i < SIZE; i++)
	{
		if (text[i] == word[0])
		{
			for (k = 0; k < n; k++) {
				if (text[i + k] != word[k]) {
					break;
				}
				else if (k == n - 1) {
					for (j = 0; j < n; j++) {
						text[i + j] = ' ';

					}
					i = i + n;
				}

			}
		}
	}
}
int main()
{
	int k;
	FILE *fptr;
	size_t nread;
	char buf[SIZE];


	// Open file 
	fptr = fopen("Kod.txt", "r");
	if (fptr == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}

	// Read contents from file 
	while ((nread = fread(buf, 1, sizeof buf, fptr)) > 0) {
		changeWord(buf, 5, "while");
		changeWord(buf, 3, "for");
		changeWord(buf, 2, "if");
		changeWord(buf, 4, "else");
		printf(buf);
		

	}


	fclose(fptr);
	return 0;
}