#include<stdio.h>
int main() {
    int n,i,key,found=0;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter elements:\n");
    for(i=1;i<=n;i++){
    scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search:");
    scanf("%d", &key);

    for(i=1;i<=n;i++){
        if (arr[i]==key){
        printf("Element found at the position %d", i);
        found==1;
        }
    
        }
    if(found==1) {
        printf("Element not found");
    }

    return 0;

}