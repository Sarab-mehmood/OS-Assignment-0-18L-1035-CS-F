#include<stdio.h>
#include<cstring>
#include<string>
#include<stdlib.h>
int main(int size,char* argv[])
{
int count=0;
int ch;
char arr[500];
char filename[20]="\0";
strcat(filename,argv[2]);
FILE *fp;
if((fp=fopen(filename,"r"))==NULL)
{
printf("Error in file handling:\n");
}
while((ch=fgetc(fp))!=EOF)
{
 int val=ch-48;
 if(val>=0 && val<=9)
 {
  count++;
 }
}
printf("Total Digits in File are:\n");
printf("%d",count);
printf("\n");
count=0;
return 0;
}
