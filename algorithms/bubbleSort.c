#include <stdio.h>

int ages[] = {3, 67, 9, 1, 28, 14};
int length = sizeof(ages) / sizeof(ages[0]);

void bubbleSort(int arr[]){
    int temp;
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i=0; i<length; i++){
        printf("%d, ", ages[i]);
    }
}

int main(){
        bubbleSort(ages);
    return 0;
}