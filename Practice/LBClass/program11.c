/*
START
     Accept number as no
     If No is completely divisible by 2
          then print Even
    otherwise
         print odd

STOP
 START
      Accept number as no
      Divide No by 2
      If remainder is 0
         then print as even
     otherwise 
        print as odd    

STOP

*/

#include<stdio.h>

int main()
{
    int iValue=0;
    int iRemainder=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRemainder =iValue %2;

    if (iRemainder ==0)
    {
        printf("Number is Even\n");

    }
    else
     {
        printf("Enter is odd \n");
    }



    

    return 0;
}