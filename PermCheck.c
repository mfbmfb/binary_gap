/*
A non-empty array A consisting of N integers is given.
A permutation is a sequence containing each element from 1 to N once, and only once.
For example, array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3
    A[3] = 2
is a permutation, but array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3
is not a permutation, because value 2 is missing.
The goal is to check whether array A is a permutation.
Write a function:
int solution(int A[], int N);
that, given an array A, returns 1 if array A is a permutation and 0 if it is not.
For example, given array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3
    A[3] = 2
the function should return 1.
Given array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3
the function should return 0.
Write an efficient algorithm for the following assumptions:
N is an integer within the range [1..100,000];
each element of array A is an integer within the range [1..1,000,000,000].
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

    printf("dizi permutasyona uygunluk durumu : %d",solution(A,4));
    

    return 0;
}

/*
permutasyon olabilmesi icin elemanlar arasi mesafe 1 olmali. n*n+1 /2 ise toplami bul. elemanlari sirayla topla ve farki bul.
*/
int solution(int A[], int N)
{
    int toplam_olmali = (N/2)*(N+1);
    for(int i=0;i<N;i++)
    {
        toplam_olmali -= A[i];
    }
    if(toplam_olmali == 0)return 1;
    else    return 0;
}

