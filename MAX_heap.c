#include<stdio.h>
int left_child(int i)
{
    return i*2;
}
int right_child(int i)
{
    return (i*2)+1;
}
int parent(int i)
{
    return i/2;
}
int Is_max_heap(int arr[],int heap_size)
{
    int i,p;
    for(int i=heap_size;i>1;i--)
    {
        p=parent(i);
        if(arr[p]<arr[i])
        { printf("Its not a max heap\n");
            return 0;
        }
    }printf("Its a max heap\n");
    return 1;

}

void max_heapify(int heap[],int heap_size,int i)
{
    int largest,l,r,temp;
    l=left_child(i);
    r=right_child(i);

    if(l<=heap_size && heap[l]>heap[i])
    {
        largest=l;
    }
    else {largest=i;}

    if(r<=heap_size && heap[r]>heap[largest])
    {
        largest=r;
    }

    if(largest!=i)
    {
        temp=heap[i];
        heap[i]=heap[largest];
        heap[largest]=temp;
        max_heapify(heap,heap_size,largest);
    }

}
void print_heap(int heap[],int heap_size)
{
    for(int i=0;i<heap_size;i++)
    {
        printf("%d ",heap[i]);
    }
}
void build_max_heap(int heap[],int heap_size)
{
    for (int i=heap_size/2;i>=1;i--)
    {
        max_heapify(heap,heap_size,i);
    }
}
void heap_sort(int heap[], int heap_size)
{
    int t;
    for(int i=heap_size;i>1;i--)
    {
    t=heap[1];
    heap[1]=heap[i];
    heap[i]=t;
        heap_size-=1;
        max_heapify(heap,heap_size,1);
    }
}

int extract_max(int heap[],int heap_size)
{
    int max_item=heap[1];
    heap[1]=heap[heap_size];
    heap_size-=1;
    max_heapify(heap,heap_size,1);
    return max_item;

}
int insert_node(int heap[],int heap_size,int node)
{
    heap_size+=1;
    heap[heap_size]=node;
    int i=heap_size,p,t;
    while(i>1 && heap[i]>heap[parent(i)])
    {
        p=parent(i);
        t=heap[p];
        heap[p]=heap[i];//exchange with parent
        heap[i]=t;
        i=p;//after swapping, the node has moved one level up,we must check if it violates the heap property with its new parent
    }
    return heap_size;
}
int increase_key(int heap[],int i,int new_value)
{
    int t;
    heap[i]=new_value;
    while(i>1 && heap[i]>heap[parent(i)])
    {   int p=parent(i);
        t=heap[i];
        heap[i]=heap[parent(i)];
        heap[p]=t;
        i=p;
    }
}
int main()
{
    int arr[10]={0,19,7,17,3,5,12,10,1,2};
    int heap_size=9;
     int arr2[10]={0,19,7,17,3,5,12,10,1,4};

    Is_max_heap(arr,heap_size);
    Is_max_heap(arr2,heap_size);

    print_heap(arr,heap_size);
    printf("\n");
    print_heap(arr2,heap_size);
    printf("\n");
    print_heap(arr,heap_size);
    printf("\n");
    build_max_heap(arr2,heap_size);
    print_heap(arr2,heap_size);
    printf("\n");




}
