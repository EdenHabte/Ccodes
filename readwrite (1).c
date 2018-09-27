#include <stdlib.h>
#include <stdio.h>

int main()
{
//Open the Input file to read the string 

	FILE * in;
	in=fopen("IN.txt",r);
//declare variables
	int len = 0; //length of string
	char str[100]; //string containing read in string 
	int count=0; 
	int j=0;
	int prefrq=1; //each letter's frequency
	char dest[100]; //new string containing each letter once
	int frq [100]; //actual freq of letters
	
	fgets(str,100,in); //str remains  a pointer but a pointer to the first element

	while (str[len]!= '\0'){ //\0 is the null end of the string we've read
	len=len+1;
	}
//because we don't know the exact size of the string
	for(i=0; i<len; i++){
		
		dest[j++]=str[i]; //
		
		while(i<len && str[i] == str[i+1]){
			lenglett++; 
	frq[j-1]=lenglett; //we're using j bc i changes, let's use j-1 bc it would have been incremented already by the time we get here
		}
	} 
fclose(in);
	FILE* writeR;
	writeR = fopen("OUT.txt", w);
	
	for(i=0; i<sizeof(len); i++){
		fprintf(writeR, dest[i], " ", frq[i])
		}
fclose(writeR);
//We are going to take each character, store it then grab another one, compare it, if it's the same-increment,if it's diff-store
}
