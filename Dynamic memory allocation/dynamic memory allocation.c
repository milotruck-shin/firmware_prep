#include <studio.h>
#include <stdlib.h>

int main ()
{
    int a;
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    free (p);
    p=(int*)malloc(sizeof(int));
    *p=20;
    free(p);

    //how to store an array onto the heap? for eg. an integer array of size 20.
    P=(int*)malloc(20*sizeof(int));

    // malloc can fail when it cannot allocate memory on request, it will return NULL, so error handling for this is required.
}


//how to declare function pointer?
uint8_t function(int param1, int param2);
uint8_t (*function_pointer)(int,int)=&function;


//ALLOCATE BLOCK OF MEMORY
//malloc - void* malloc(size_t size). returns the address of the first byte of memory allocated.
//void pointer is used as a general pointer type and normally typecasted into  a pointer typ of a particular data typ.
int *m = (int*)malloc(3*sizeof(int))
m[0]=2;
m[1]=3;
m[3]=4;

//calloc - void* calloc(size_t num, size_t size). num is number of elements of a particular datatype. size is the size of data type in bytes.
int *c=(int*)calloc(3,sizeof(int));  //it initialises the allocated memory with 0, meanwhile for malloc its all random values.

//realloc - to change the size of memory
//        - void* realloc(void* ptr,size_t size). ptr is the pointer to the starting address of the existing block. size is the new size we want.
