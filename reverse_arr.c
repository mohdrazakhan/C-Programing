#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,tmp;
    scanf("%d", &num);
    int arr[num], temp[num];
    for(i=0; i<num; i++) {
        scanf("%d",&arr[i]);
    }
   for(i = 0; i < num/2; i++){
        tmp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = tmp;
    }
 
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}