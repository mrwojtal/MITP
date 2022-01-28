#include <stdio.h>
                                          // the program is counting the number of function funckja is calls
void funkcja(){
    static int x=1;
    printf("%d wywolanie\n", x++);
}

int main() {
    int n;
    printf("Ile razy wywolac funkcje:");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        funkcja();
    return 0;
}
