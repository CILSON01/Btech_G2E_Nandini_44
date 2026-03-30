#include<stdio.h>
int main() {
    int n, i;

    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");
    for (i=0; i<=n;i++){
    scanf("%d",&arr[i]);
    }

for(i=0; i< n/2; i++){
    int temp= arr[i];
    arr[i]= arr[n-i-1];
    arr[n-i-1]= temp;
}
printf("The reversed array:\n");
for(i=0; i<n; i++){
    printf("%d", arr[n-i-1]);
}
  return 0;   
}