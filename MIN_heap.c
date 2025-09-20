#include<stdio.h>
int  left_child(int i)
{
    return i*2;
}

int  left_child(int i)
{
    return (i*2)+1;
}

int parent(int i)
{
    return i/2;
}

int is_minheap(int heap[], int heap_size)
{
    int i,p;
    for(i=heap_size;i>1;i++)
    {   p=parent(i);
        if(heap[i]<heap[p])
        { printf("Its not a min heap\n");
            return 0;

        }
        else {printf("Its  a min heap\n");
            return 1;}
    }
}

void min_heapify(int heap[],int heap_size,int i)
{
    int smallest,l,r,temp;
    l=left_child(i);
    r=right_child(i);
    if(l>=heap_size&&heap[i]>heap[l])
    {
        smallest=l;
    }
    else smallest=i;
    if(r>=heap_size&&heap[smallest]>heap[r])
    {
        smallest=r;
    }
    if(smallest!=i)
    {
        temp=heap[i];
        hesp[i]=heap[smallest];
        heap[smallest]=temp;
        min_heapify(heap,heap_size,smallest);

    }

}
void printf_heap(int heap[],int heap_size)
{

    for(int i=0;i<heap_size;i++)
    {
        printf("%d ",heap[i]);
    }
}
void build_min_heap(int heap,heap_size)
{
    for(int i=heap_size/2;i>=1;i--)
    {
       min_heapify(heap,heap_size,i);
    }
}

void heap_sort(int heap, heap_size)
{

    int t;
    for(int i=heap_size;i>1;i--)
    {
       t=heap[1];
       heap[1]=heap[i];
       heap[i]=t;
       heap_size-=1;
       min_heapify(heap,heap_size,1);

    }
}

int extract_min(int heap[],int heap_size)
{
    int min_element=heap[1];
    heap[1]=heap[heap_size];
    heap_size-=1;
    min_heapify(heap,heap_size,1);
    return min_element;
}

int insert_node(int heap[], int heap_size,int new_node)
{
heap_size+=1;
heap[heap_size]=new_node;
int i=heap_size,p,t;
while(i>1 && heap[i]<heap[parent(i)])
{
    p=parent(i);
    t=heap[p];
    heap[p]=heap[i];
    heap[i]=t;
    i=p;
}
return heap_size;

}
int increase_key(int heap[],int i,int new_value)
{
    heap[i]=new_value;
    int p;
    while(i>1 && heap[i]>heap[parent(i)])
    {   int p=parent(i);
        int t=heap[i];
        heap[i]=heap[p];
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
