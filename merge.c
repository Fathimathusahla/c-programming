  1 #include<stdio.h>
  2 int main()
  3 {
  4     int a[5],b[5],c[10];
  5     int i,j,k,temp;
  6     printf("enter 5 numbers of first array:");
  7     for(i=0;i<5;i++)
  8         scanf("%d",&a[i]);
  9     printf("Enter 5 elements of second array:");
 10     for(i=0;i<5;i++)
 11         scanf("%d",&b[i]);
 12     for(i=0;i<5;i++)
 13     {
 14         for(j=i+1;j<5;j++)
 15         {
 16             if(a[i]>a[j])
 17             {
 18                 temp=a[i];
 19                 a[i]=a[j];
 20                 a[j]=temp;
 21             }
 22         }
 23     }
 24     for(i=0;i<5;i++)
 25     {
 26         for(j=i+1;j<5;j++)
 27         {
 28             if(b[i]>b[j])
 29             {
 30                 temp=b[i];
 31                 b[i]=b[j];
 32                 b[j]=temp;
 33             }
 34         }
 35     }
 36     i=0;
 37     j=0;
 38     k=0;
 39     while(i<5&&j<5)
 40     {
 41         if(a[i]<b[j])
 42         {
 43             c[k]=a[i];
 44             i++;
 45         }
 46         else
 47         {
 48             c[k]=b[j];
 49             j++;
 50         }
 51         k++;
 52     }
 53     while(i<5)
 54     {
 55         c[k]=a[i];
 56         k++;
 57         i++;
 58     }
 59     while(j<5)
 60     {
 61         c[k]=b[j];
 62          k++;
 63         j++;
 64     }
 65     printf("merged array:\n");
 66     for(i=0;i<10;i++)
 67         printf("%d ",c[i]);
 68     return 0;
 69 }
