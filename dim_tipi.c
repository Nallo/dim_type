/*


	Compile:
	
		gcc -Wall -o dim_tipi dim_tipi.c


	Run:

		./dim_tipi


*/



#include <stdio.h>

int main(void){
	
	system("uname -a");
	fprintf(stdout, "\ndouble = %f byte", (float)(sizeof(double)));	
	fprintf(stdout, "\nfloat = %f byte", (float)(sizeof(float)));
	fprintf(stdout, "\nchar = %f byte", (float)(sizeof(char)));
	fprintf(stdout, "\nint = %f byte", (float)(sizeof(int)));
	fprintf(stdout, "\nvoid* = %f byte\n\n", (float)(sizeof(void*)));

	return 0;	
}
