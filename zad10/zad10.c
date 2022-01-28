#include <stdio.h>
                                                          // printing requested fibonnaci number
int main() {
    int n;
    printf ("Podaj n wyraz ciagu fibonacciego:");
    scanf ("%d", &n);
    int a, b, result;
    a=b=1;
    for (int i=2; i<n; ++i){
        result=a+b;
        a=b;
        b=result;
    }
    printf("%d wyraz ciagu fibonacciego:%d\n",n, result);
    return 0;
}
