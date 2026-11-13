 1 #include<stdio.h>
  2 #define SIZE 5
  3 int queue[SIZE];
  4 int front=-1,rear=-1;
  5 void enqueue(int value)
  6 {
  7     if((rear + 1) % SIZE == front)
  8     {
  9         printf("Queue is FULL(overflow).\n");
 10         return;
 11     }
 12     if(front==-1)
 13         front=0;
 14     rear=(rear+1) % SIZE;
 15     queue[rear]=value;
 16     printf("%d inserted.\n",value);
 17 }
 18 void dequeue()
 19 {
 20     if(front==-1)
 21     {
 22         printf("Queue is empty(underflow).\n");
 23         return;
 24     }
 25     printf("%d deleted.\n",queue[front]);
 26     if(front==rear)
 27         front=rear=-1;
 28     else
 29         front=(front+1)% SIZE;
 30 }
 31 void display()
 32 {
 33     if(front == -1)
 34     {
 35         printf("Queue is empty\n");
 36         return;
 37     }
 38
 39     printf("Queue: ");
 40     int i = front;
 41     while(1)
 42     {
 43         printf("%d ", queue[i]);
 44         if(i == rear)
 45             break;
 46         i=(i + 1)% SIZE;
 47     }
 48     printf("\n");
 49 }
 50 int main()
 51 {
 52     int choice,value;
 53     while(1)
 54     {
 55         printf("\n---Circular Queue---\n");
 56         printf("1.insert\n");
 57         printf("2.Delete\n");
 58         printf("3.Display\n");
 59         printf("4.Exit\n");
 60         printf("Enter choice:");
 61         scanf("%d",& choice);
 62         switch(choice)
 63         {
 64             case 1:
 65                 printf("Enter value to insert:");
 66                 scanf("%d",& value);
 67                 enqueue(value);
 68                 break;
 69             case 2:
 70                 dequeue();
 71                 break;
 72             case 3:
 73                 display();
 74                 break;
 75             case 4:
 76                 return 0;
 77             default:
 78                 printf("Invalid choice\n");
 79         }
 80     }
 81 }
