//Write a C program to copy a file from one location to another. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp, *fp1;
    char name[100], file[100], x[100], z[100];
    
    printf("Enter what you wants to store in the File.txt in order to be copied in File1.txt:\n");
    scanf("%[^\n]%*c", name);
    
    printf("Enter the file name you want to store data in: \n");
    scanf("%s", file);
    
    strcpy(x, file);
    fp=fopen(file, "w+");
    fprintf(fp, "%s\n", name);
    fclose(fp);
    
    printf("Enter the file name you want to copy data in:\n");
    scanf("%s", file);
    
    strcpy(z, file);
    
    fp1=fopen(file, "w+");
    fclose(fp1);
    
    FILE *fptr1, *fptr2; 
    char filename[100], c;
    
    printf("Enter the filename to open for reading: \n"); 
    scanf("%s", filename);
    
    fptr1=fopen(filename, "r");
    
    if(fptr1==NULL)
    {
        printf("Cannot open file %s \n"< filename);
        exit(0);
    }
    
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
    
    fptr2=fopen(filename, "w");
    
    if(fptr2==NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
    
    c=fgetc(fptr1);
    while(c!=EOF)
    {
        fputc(c, fptr2);
        c=fgetc(fptr1);
    }
    printf("\n Contents copied to %s\n", filename);
    fclose(fptr1);
    fclose(fptr2);
    
    FILE *fps, *fps1; 
    
    printf("\nThe contents of %s \n", x);
    fps=fopen(x, "r");
    if(fps==NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    
    c=fgetc(fps);
    while(c!=EOF)
    {
        printf("%c", c);
        c=fgetc(fps);
    }
    fclose(fps);
    
    printf("\nThe contents of %s \n", z);
    fps1=fopen(z, "r");
    
    if(fps1==NULL)
    {
        printf("Cannot open file\n");
        exit(0);
    }
    c=fgetc(fps1);
    while(c!=EOF)
    {
        printf("%c", c);
        c=fgetc(fps1);
    }
    
    fclose(fps1);
    return 0;
}

    