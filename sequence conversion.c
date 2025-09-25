#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int i, len;
char seq[ 5000 ];
	scanf("%s",seq);
	len = strlen( seq );
	for ( i=0 ; i<len ; i++ )
	{
		if ( seq[i] == 'G' || seq[i] == 'T' || seq[i] == 'S' )
			{
				printf(".");
			}
		if ( seq[i] == 'D' || seq[i] == 'E' || seq [i] == 'H' || seq[i] == 'K' || seq[i] == 'Q' || seq[i] == 'R' || seq[i] == 'N' )
			{
				printf(" ");
			}
		if ( seq[i] == 'A' || seq[i] == 'C' || seq[i] == 'M' || seq[i] == 'P' )
			{
				printf(":");
			}
		if ( seq[i] == 'F' || seq[i] == 'I' || seq[i] == 'L' || seq[i] == 'V' || seq[i] == 'W' || seq[i] == 'Y' )
			{
				printf("*");
			}
	}
}
