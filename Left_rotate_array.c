// Left rotate array of size n by d

//Method - Rotate by GCD
//Time complexity - O(n)
//Auxiliary space - O(1)


int gcd(int a, int b)  //find gcd of 2 nos
{
    if(b == 0)
        return a;
    else
    {
        return gcd(b, (a%b));
    }    
}

void leftRotateByGcd(int arr[], int n, int d)
{
    int i, j, k, temp;
    for(i=0; i<gcd(d, n); i++)
    {
         temp = arr[i];
         j=i;
         while(1)
         {
            k = j + d;
            if(k >= n)
                k = k - n;
            if(k == i)
                break;
            arr[j] = arr[k]; 
            j = k;
         }
         arr[j] = temp;
         printf("\n");
         printArray(arr, 12);
    }
}


// Method - temporary array
// Time complexity - O(n)
// Auxiliary space - O(d)

void leftRotate(int arr[], int d,int n)
{
    int temp_arr[d], i, j=0;
    for (i=0; i<d; i++)
    {
        temp_arr[i] = arr[i];
        printf("%d", temp_arr[i]);
    }
    printf("\n");
    for(i=d; i<n; i++)
    {
        arr[j] = arr[i];
        j++;
        printf("%d", arr[i]);
    }
    j = 0;
    for(i=(n-d); i<n; i++)
    {
        arr[i] = temp_arr[j];
        j++;
    }
}


// Method - Rotate one by one
// Time complexity - O(n*d)
// Auxiliary space - O(1)

void rotate(int arr[], int n)
{
    int temp, i;
    temp = arr[0];
    for(i=0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}


void leftRotateByOne(int arr[], int d, int n)
{   
    int i; 
    for(i=0; i<d; i++)
    {
        rotate(arr, n);
    }
}


//Print array
void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}

# include<stdio.h>
int main()
{
   int arr1[] = {1,2,3,4,5,6,7};
   int arr2[] = {1,2,3,4,5,6,7};
   leftRotate(arr1, 3, 7);
   printf("\nRotated array:");
   printArray(arr1, 7);
   printf("\nRotate by one:");
   leftRotateByOne(arr2, 2, 7);
   printArray(arr2, 7);
   int arr3[] = {1,2,3,4,5,6,7,8,9,10,11,12};
   leftRotateByGcd(arr3, 12, 3);
   printArray(arr3, 12);
   return 0;
   
}


