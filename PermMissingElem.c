/*
Task description
An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.
Your goal is to find that missing element.
Write a function:
int solution(int A[], int N);
that, given an array A, returns the value of the missing element.
For example, given array A such that:
  A[0] = 2
  A[1] = 3
  A[2] = 1
  A[3] = 5
the function should return 4, as it is the missing element.
Write an efficient algorithm for the following assumptions:

N is an integer within the range [0..100,000];
the elements of A are all distinct;
each element of array A is an integer within the range [1..(N + 1)].
*/

int solution(int A[], int N);

#include <stdio.h>

int main()
{
    // int N = 0;
    // printf("bir N degeri giriniz:");
    // scanf("%d",&N);

    int A[4];
    A[0] = 5;
    A[1] = 1;
    A[2] = 2;
    A[3] = 4;

    printf("dizideki eskik eleman bulundu : %d",solution(A,4));
    

    return 0;
}

/*
N 4 değeri olsun 
1 2 3 4 5  degerlerinden olusan toplam 5 elemanli bir dizi olacak
2 3 1 5 girilince eksik eleman 4 vermeli
1 herhangi bir dizi elemaninda var mi diye bakilir sirayla N+1 e kadar her birine bakilir...
*/
int solution(int A[], int N)
{
    int sonuc = 0;
    int count = 1;
    int i = 0;
    int cikis = 0;

    while(cikis != 1)
    {
        if(i >= N)
        {
            sonuc = count;
            cikis = 1;
        }
        else if(A[i] != count)
        {
            i++;
        }
        else if(A[i] == count)
        {
            i = 0;
            count++;
        }        
    }
    return sonuc;
}

/*
1 den N+1 e kadar olan sayilar toplami (N+1)*N+2)/2 olduguna gore, dizi elemanlari sirayla toplanip bu degerden cikarilarak sonuc bulunur.
*/
// int solution(int A[], int N)
// {
//     int toplam = (N+1)*(N+2)/2;
//     int dizi_toplami = 0;

//     for(int i=0; i<N;i++)
//     {
//         dizi_toplami += A[i];
//     }
//     return toplam-dizi_toplami;
// }

