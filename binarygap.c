#include "stdio.h"
#include "math.h"
/*
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.
For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains
two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. 
The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.

Write a function:
int solution(int N);
that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.
For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. 
Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..2,147,483,647].
*/

int solution(int N);

int main()
{
  int N = 0;
  printf("enter an integer : ");
  scanf("%d",&N);

  printf("binary gap of %d = %d",N,solution(N) );
  return 0;
}

static int count = 0;
int solution(int N) 
{
  static int binary[100];
  while(N>=1)
  {
    binary[count] = N%2;
    if(N==1)binary[count] = 1;
    N = N/2;
    count++;
  }

  static int ones[100];
  static int ones_ind = 0;
  for(int i=0;i<count;i++)
  {
    if(binary[i] == 1)
    {
      ones[ones_ind++] = i;
    }
  }

  static int max_indis = 0;
  max_indis = ones_ind-1;

  static int sonuc = 0;
  static int sonuc_buyuk_olan = 0;
  static int cnt = 0;

  while(cnt < max_indis)
  {
   sonuc = abs( ones[cnt]- ones[cnt+1] ) -1 ;
   if(sonuc_buyuk_olan < sonuc)sonuc_buyuk_olan = sonuc;
   cnt++;
  }

  return sonuc_buyuk_olan;  
}


/*
41d 101001b


37d 100101b

1lerin indislerini bul ve bunlardan ayri bir dizi yap ve bu dizinin max indisini bul max_indis = 2
0
3
5
ones[] = {0,3,5}; 

//
sonuc_buyuk_olan = 0;
cnt = 0;

while(cnt < max_indis)
abs( ones[cnt]-ones[cnt+1] ) mutlak degerini bul sonuca esitle ,sonuc = 3
if(sonuc_buyuk_olan < sonuc)sonuc_buyuk_olan = sonuc;
cnt++;

en buyuk olani al
//


number 9 has binary representation 1001
while(value>=2)
value%2
9%2 = 1  gelir 9/2 = 4
4%2 = 0 gelir 4/2 = 2
2%2 = 0 gelir 2/2 = 1

N = 1041 the function should return 5, because N has binary representation 10000010001
1041%2 = 1    1041/2     520
520%2 = 0     520/2      260
260%2 = 0     260/2      130
130%2 = 0     130/2      65
65%2 = 1      65/2       32
0                        16
0                        8
0                         4
0                         2
0                         1
*/