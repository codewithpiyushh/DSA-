#include <stdio.h>

int main() {
    int i, n, num, pos, arr[10];
// number of array
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
for(i=0;i<n;i++)
{printf("\t arr[%d] = ", i);
scanf("%d", &arr[i]);
}
//number to be inserted 
printf("enter the number to be inserted: ");
scanf("%d",&num);
//position 
printf("enter the position: ");
scanf("%d",&pos);
for(i=0;i<n;i++)
if(arr[i]>num){
     for(i=n-1;i>=pos-1;i--)
     arr[i+1]=arr[i];
     arr[pos-1]=num;
     break;
}
n=n+1;
for(i=0;i<n;i++)
printf("%d", arr[i]);
    return 0;
}