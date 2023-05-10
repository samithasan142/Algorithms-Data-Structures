#include<bits/stdc++.h>

int left(int i)
{
    return 2 * i;
}

int right(int i)
{
    return 2 * i + 1;
}

int parent(int i)
{
    return i / 2;
}

void max_heapify(int heap[], int heap_size, int i)
{
    int l, r, largest, t;

    l = left(i);    // l is the index of left child
    r = right(i);   // r is the index of right child

    if(l <= heap_size && heap[l] > heap[i]){
        largest = l;
    }else{
        largest = i;
    }

    if(r <= heap_size && heap[r] > heap[largest]){
        largest = r;
    }

    if(largest != i){
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;

        max_heapify(heap, heap_size, largest);
    }
}

void print_heap(int heap[], int heap_size)
{
    int i;

    for(i = 1; i <= heap_size; i++){
        printf("%d ", heap[i]);
    }
    printf("\n\n");
}

void build_max_heap(int heap[], int heap_size)
{
    int i;

    for( i = heap_size / 2; i >= 1; i--){
        max_heapify(heap, heap_size, i);
    }
}

void heap_sort(int heap[], int heap_size)
{
    int i, t;

    for(i = heap_size; i > 1; i--){
        t = heap[1];
        heap[1] = heap[i];
        heap[i] = t;

        heap_size -= 1;
        max_heapify(heap, heap_size, 1);
    }
}

int main()
{
    int heap_size = 9;
    int heap[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 2};

    print_heap(heap, heap_size);

    max_heapify(heap, heap_size, 3);
    print_heap(heap, heap_size);

    heap_sort(heap, heap_size);
    printf("After Heap Sort: ");
    print_heap(heap, heap_size);

    return 0;
}
