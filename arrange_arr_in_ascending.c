#include<stdio.h>
// WAP to arrange given number in ascending order
void main()
{
    int n;
    printf("Enter How Many Numbers you want to arranged in ascending Order: ");
    scanf("%d",&n);
    int a[n],i,j,temp;
    /*Getting Input from user*/
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    /*Swaping Numbers for arranged in ascending order*/
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    //Printing Swaped Value of whole arr
    for (i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
}