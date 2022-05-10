/*
Task description
A small frog wants to get to the other side of the road. The frog is currently located at position X and wants to get to a position greater than or equal to Y.
The small frog always jumps a fixed distance, D.
Count the minimal number of jumps that the small frog must perform to reach its target.
Write a function:
int solution(int X, int Y, int D);
that, given three integers X, Y and D, returns the minimal number of jumps from position X to a position equal to or greater than Y.

For example, given:
  X = 10
  Y = 85
  D = 30
the function should return 3, because the frog will be positioned as follows:
after the first jump, at position 10 + 30 = 40
after the second jump, at position 10 + 30 + 30 = 70
after the third jump, at position 10 + 30 + 30 + 30 = 100
Write an efficient algorithm for the following assumptions:

X, Y and D are integers within the range [1..1,000,000,000];
X ≤ Y.
*/

#include <stdio.h>
#include <time.h>

int solution(int X, int Y, int D);

int main()
{
    // int x = 0;
    // int y = 0;
    // int d = 0;

    // printf("please enter frog's starting location (X) :" );
    // scanf("%d",&x);

    // printf("\nplease enter frog's finishing location (Y) :" );
    // scanf("%d",&y);

    // printf("\nplease enter frog's step distance (D) :" );
    // scanf("%d",&d);
    
    int start = clock();

    for(int i=0;i<1000;i++)
    {
    int min_step = 0;
    // min_step = solution(x,y,d);
    min_step = solution(10,85,30);

    printf("\nminimum step to reach finishing location is %d",min_step);
    }
    int stop = clock();
    printf("\ncode took %d system tick duration ",stop-start);

    return 0;
}

//code took 149 duration
int solution(int X, int Y, int D)
{
    int sonuc = 0;

    if( (Y-X)%D == 0)
    {
        sonuc = (Y-X)/D;
    }
    else
    {
        sonuc = ((Y-X)/D)+1;
    }
    
    return sonuc;
}

//code took 153 system tick duration
// int solution(int X, int Y, int D) {
//     // write your code in C99
//     int m, n;
    
//     m = Y - X;
//     n = m / D;
//     if(m % D) {
//         n++;
//     }
    
//     return n;
// }