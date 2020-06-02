#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    int res;
    scanf("%lld",&n);

    while(n>0){
        res = n%10;
        n = n/10;
        printf("%i",res);
    }
    printf("\n");

    return 0;
}
