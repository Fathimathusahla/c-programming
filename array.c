 #include<stdio.h>
  2 int largest(int a[5],int n)
  3 {
  4     int max=a[0];
  5     for(int i=0;i<n;i++)
  6     {
  7         if(a[i]>max);
  8         {
  9             max=a[i];
 10
 11         }
 12     }
 13     return max;
 14 }
 15 int main()
 16 {
 17     int a[5],i,result;
 18     printf("Enter 5 elements:\n");
 19     for(i=0;i<5;i++)
 20     {
 21         scanf("%d",&a[i]);
 22     }
 23     result=largest(a,5);
 24     printf("largest elemnt=%d",result);
 25 }


output:-

Enter the elements:
23
67
89
90
100
largest elemnt=100