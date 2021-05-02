/*
DISNEY - LEAP YEAR
Patrick and Johnny found a notice in Disneyland stating that special adventures will be opened if the current year is a leap year. They were very excited and wanted to know that the year is leap year or not. Help them by writing a  program to check whether a given year is a leap year or not.
Input Format:
Input consists of a single integer.
Output Format:
Output consists of a single line. Refer sample output for details.
Sample Input 1:
1988
Sample Output 1:
1988 is a leap year
Sample Input 2:
1994
Sample Output 2:
1994 is not a leap year
*/
#include<stdio.h>
int main()
{
  int year;
  scanf("%d",&year);
  if((((year%4==0)&&((year%100)!=0))||((year%400)==0))
  {
      printf("%d is a leap year",year);
  }
  else
     printf("%d is not a leap year",year);
 return 0;
}     
