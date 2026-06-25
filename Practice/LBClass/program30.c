#include<stdio.h>

void Display(int iNo)
{
     int iCnt =0;
  
     //Filter
     if (iNo < 0)
     {
        printf("invaild input\n");
        return;
     }

     for(iCnt=1; iCnt <=iNo; iCnt++)
    {
       printf("jay ganesh..\n");
    }

}
int main()
{
   
    int iValue =0;

    printf("Enter the frequency :");
    scanf("%d",&iValue);

    Display (iValue);
   
   
    return 0;
}