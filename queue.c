#include <stdio.h>
#define SIZE 5

int front = -1, rear = -1;

int queue[SIZE];

void EnQueue(int);
int DeQueue();
int queuesize();
int isqueuefull();
int isqueueempty();
void printqueue();

void EnQueue(int data)
{
    if (isqueuefull())
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % SIZE;
        }

        queue[rear] = data;
        printf("%d\n", data);
    }
}

int DeQueue()
{
    int data;

    if (isqueueempty())
    {
        printf("Queue is Empty\n");
        return -1;
    }

    data = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }

    return data;
}

int queuesize()
{
    if (isqueueempty())
        return 0;

    return (rear - front + SIZE) % SIZE + 1;
}

int isqueuefull()
{
    return (rear + 1) % SIZE == front;
}

int isqueueempty()
{
    return front == -1;
}

void printqueue()
{
    int i;

    if (isqueueempty())
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue Elements: ");

        i = front;

        while (1)
        {
            printf("%d ", queue[i]);

            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }

        printf("\n");
    }
}

int main()
{
    EnQueue(10);
    EnQueue(20);
    EnQueue(30);
    EnQueue(40);
    EnQueue(50);

    printqueue();

    printf("Deleted Element: %d\n", DeQueue());

    printqueue();

    printf("Queue Size: %d\n", queuesize());

    EnQueue(60);

    printqueue();

    return 0;
}