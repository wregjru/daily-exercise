#define _CRT_SECURE_NO_WARNINGS



typedef struct
{
    int* a;
    int head;
    int tail;
    int k;


} MyCircularQueue;
bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
    return obj->head == obj->tail;

}


MyCircularQueue* myCircularQueueCreate(int k)
{
    MyCircularQueue* new = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    new->a = malloc(sizeof(int) * (k + 1));
    new->head = 0;
    new->tail = 0;
    new->k = k;
    return new;

}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    else
    {
        obj->a[obj->tail] = value;
        obj->tail++;
        obj->tail = obj->tail % (obj->k + 1);
        return true;

    }

}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return false;
    else
    {
        obj->head++;
        obj->head = (obj->head) % (obj->k + 1);
        return true;

    }

}

int myCircularQueueFront(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return -1;
    else
    {
        return obj->a[obj->head];
    }

} 

int myCircularQueueRear(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return -1;
    else
        return obj->a[(obj->tail + obj->k) % (obj->k + 1)];

}



bool myCircularQueueIsFull(MyCircularQueue* obj)
{
    return (obj->tail + 1) % (obj->k + 1) == obj->head;

}

void myCircularQueueFree(MyCircularQueue* obj)
{
    free(obj->a);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/