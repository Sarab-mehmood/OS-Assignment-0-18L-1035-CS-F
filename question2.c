#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ch='\0';
    printf("Enter the character:\n");
    scanf("%s",ch);
    char name[10];
    char rollno[20];
    FILE * fp=fopen("record.txt","r"); //file pointer for read.
    FILE *fp1;
    fp1=fopen("record.txt","w");
    char email[30];
    if(ch=='A')
    {
      printf("Add:\n");
      printf("Enter the record:\n");
      scanf("%s",&name);
      scanf("%s\",&rollno);
      scanf("%s",&email);
      
      fputs(name,fp1);
      fputs(rollno,fp1);
      fputs(email,fp1);
    }
    if(ch=='R')
    {
        char line[100];
       printf("The record is:\n");
       while(fgets(line,100,fp)!=NULL)
       {
           printf("%s",line);
       }
    }
    if(ch=='D')
    {
        FILE * fp3=fopen("new.txt","w");
        char arr[100];
        while(fgets(arr,100,fp)!=NULL)
        {
            fputs(arr,fp3);
        }
        fclose("record.txt");
        fclose("new.txt");
        remove("record.txt");
        rename("new.txt","record.txt");
    }
    return 0;

}