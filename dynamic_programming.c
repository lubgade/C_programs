// Dynamic programming example

#include <stdio.h>
# define NIL -1
# define MAX 100

// Memoized approach (top down)

int lookup[MAX];

void initialize()
{
    int i;
    for(i=0; i<MAX; i++)
        lookup[i] = NIL;
}
int fib_lookup(int n)
{
    if(lookup[n] == NIL)
    {
        if(n <= 1)
            lookup[n] = n;
        else
            return fib_lookup(n-1) + fib_lookup(n-2);
    }
    return lookup[n];
}


// Tabulated version - Bottom up

int fib_tabulated(int n)
{
    int f[n+1], i;
    f[0] = 0;
    f[1] = 1;
    for(i=2; i<=n; i++)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}

int main() {
	//code
	int n = 9;
	initialize();
	printf("Fibonacci: %d", fib_lookup(n));
	printf("\nFibonacci: %d", fib_tabulated(n));
	return 0;
}