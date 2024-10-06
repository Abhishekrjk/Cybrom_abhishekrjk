#include<stdio.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myarray* a , int tsize, int usize){
    (*a).total_size =tsize;
     (*a).used_size =usize;
     int * ptr =(int *)malloc(tsize*sizeof(int));

    /* data */
}
int main(){
    struct myarray marks;
     createArray(&marks, 100, 20);
    {
        /* data */
    };
    
return 0;

}
