#include<stdio.h>
void main ()
{
  //
  int p,q,r,s,i,j,k;
  printf("Enter The order of First Matrix:");
  scanf("%d %d",&p,&q);
  printf("Enter The Order of Second Matrix:");
  scanf("%d %d",&r,&s);

if(q==r){
int a[p][q], b[r][s], m[p][s];
  printf ("Enter the values of first matrix (Row first):");
    for(i=0;i<p;i++) { 
        for(j=0;j<q;j++) {
            scanf("%d",&a[i][j]);
        }
        
    }
   printf ("Enter the value of second matrix (Row first):");
    for(i=0;i<r;i++) {  //
        for(j=0;j<s;j++) {
            scanf("%d",&b[i][j]);
        }
    }
   // calculation
    for(i=0;i<p;i++){
        for(j=0;j<s;j++){
            m[i][j]=0;
            for(k=0;k<r;k++) {
                m[i][j]=m[i][j]+a[i][k]*b[k][j];
            }
        }
    }
   //print calculated value
   for(i=0;i<p;i++){
    for(j=0;j<s;j++) {
        printf("%d\t", m[i][j]);
    }
    printf("\n");
   }
}
else 
{ printf("Multiplication is not possible for given order of matrix"); }

}
 