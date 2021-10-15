//write a C program for Student information storage and retrieval using file handling. 

#include<stdio.h> 

#define SIZE 1024

int main()
{
    char text[SIZE] = {0},record[100];
    char ch; 
    int cnt=0,len;
    FILE *fp;
    
    fp = fopen("file1.txt", "w");
    
    if(fp==NULL)
    {
        printf("Error in creating file");
        return -1;
    }
    
    printf("\nEnter student details line wise (Press # to save and close): \n");
    
    printf("Enter in format NAME - AGE - TOTAL MARKS \n");
    while(1)
    {
        ch=getchar();
        if(ch=='#')
        {
            break;
        }
        fputc(ch,fp);
    }
    fclose(fp);
    printf("File saved successfully\n");
    
    fp=fopen("file1.txt", "r");
    if(fp==NULL)
    {
        printf("Error in opening file.\n");
        return -1;
    }
    
    printf("Entered records are: \n");
    
    cnt=0;
    
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch==0x0A)
        {
            record[cnt++]='\0';
            cnt=0;
            printf("%s\n", record);
            continue;
        }
        record[cnt++]=ch;
    }
    fclose(fp);
    return 0;
}