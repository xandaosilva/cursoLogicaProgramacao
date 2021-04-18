#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,resp;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        resp = n * i;
        printf("%d X %d = %d\n", n,i,resp);
    }

    return 0;
}
