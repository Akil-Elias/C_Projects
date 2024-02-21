#include <stdio.h>
#include <string.h>

void reverseString(char string[]){
    int i;
    int len = strlen(string); 
    for(i = len; i >= 0; i--){
        printf("%c", string[i]);
    }
}

int main(){
    char name[8] = "Akil";
    reverseString(name);
    return 0;
}