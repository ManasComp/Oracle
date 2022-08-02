#include <stdio.h>
#include <stdlib.h>

void counter(int n){
    for(int i = 1; i <= n; i++){
        if (i % 3 == 0)
            printf("Crackle");
        if (i % 5 == 0)
            printf("Pop");
        if (i % 3 != 0 && i % 5 != 0)
            printf("%d", i);
        printf("\n");
    }
}

int main()
{
    counter(100);    
    return 0;
}
