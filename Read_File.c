#include <stdio.h>

int main(){
    FILE *f = fopen("C:\\Users\\Intel i5\\Desktop\\Content.txt", "r");
    char buffer[255];

    while(fgets(buffer, 255, f) != NULL){
        printf("%s", buffer);
    }

    fclose(f);
    
    return 0;
}