#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
int main(){
    int n;
    int *ptr;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated.\n");
        return 0;
    }
    printf("enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("you entered:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}
