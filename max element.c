#include<stdio.h>
 int main(){
    int n,i;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(i=1; i<=n;i++){
    scanf("%d", &arr[i]);
    }

    int max = arr[n];

    for(i=1;i<=n;i++){
    if(arr[i] > max){
        max = arr[i];
    }
}
printf("Maximum element = %d", max);

return 0;
}   