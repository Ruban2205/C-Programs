/*Write a Program accept records of different states using array of structures. The structure should contain char state and number of int engineering colleges, int medical colleges, int management colleges, and int universities. Calculate the total colleges and display the state, which is having highest number of colleges. */ 

#include<stdio.h> 

struct names{ 
    char state[10];
    int engineering, medical, management, university, total;
};

int main()
{
    int n, i, max=0;
    
    printf("Enter the number of states to accept: ");
    scanf("%d", &n);
    
    struct names arr[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter the name of the state number %d: ", i+1);
        scanf("%s", &arr[i].state);
        
        printf("Enter the number of Engineering Colleges: ");
        scanf("%d", &arr[i].engineering);
        
        printf("Enter the number of Medical Colleges: ");
        scanf("%d", &arr[i].medical);
        
        printf("Enter the number of Management Colleges: ");
        scanf("%d", &arr[i].management);
        
        printf("Enter the number of Universities: ");
        scanf("%d", &arr[i].university);
        
        arr[i].total = arr[i].engineering + arr[i].medical + arr[i].management + arr[i].university;
        
        if(arr[i].total > arr[max].total)
            max = i; 
    }
    
    printf("SI.No.\tState\tEngineering\tMedical\tManagement\tUniversities\n");
    
    for(i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n", i+1, arr[i].state, arr[i].engineering, arr[i].medical, arr[i].management, arr[i].university);
    }
    
    printf("The state with maximum number of colleges is %s \n", arr[max].state);
}
