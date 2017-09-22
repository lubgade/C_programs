// Print nos from 1 to n without using semicolon

// Method 1 - Recursive

# include<stdio.h>
# define N 10

int main(int num)
{
    if(num <= N && printf("%d", num) && main(num + 1)){

        }
}


// Method 2 - Iterative

# include<stdio.h>
# define N 10
int main(int num)
{
    while(num <= N && printf("%d", num) && num++)
    {
    }
}





// Print a string without using semicolon

// Method1 - if statement
# include<stdio.h>
int main()
{
    if(printf("Some string"))
    {
    }
}

// Method2 - while loop
# include<stdio.h>
int main()
{
    while(!printf("Some string"))
    {
    }
}

// Print ; without using semi-colon
# include<stdio.h>
int main()
{
    if(printf("%c", 59))
    {
    }
}