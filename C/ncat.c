#include<stdio.h>
#include<stdlib.h>

#define BUFSIZE 8

int 
readFile(FILE *fptr)
{
	char buf[BUFSIZE];
	int len;
	while(!feof(fptr))
	{
		len = fread(buf,sizeof(char),BUFSIZE,fptr);
		fwrite(buf,sizeof(char),len,stdout);
	}
}

int 
main(int argc,char *argv[])
{
	FILE *fptr;
	int i;
	for(i=1;i<argc;i++)
	{
		fptr=fopen(argv[i],"r");
		readFile(fptr);
	}
	exit(0);
}
