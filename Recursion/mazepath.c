#include <stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightways = 0;
    int downways = 0;
    if(cr == er && cc == ec) return 1;

    if(cr == er){ // only rightways call
         rightways +=  maze(cr, cc, er, ec);
    }
    if(cc == ec){ // only downward call
         downways += maze(cr+1, cc, er, ec);
    }
    if(cr < er && cc < ec){
        rightways +=  maze(cr, cc, er, ec);
        downways += maze(cr+1, cc, er, ec);
    }
    int totalways = rightways + downways;
    return totalways;
}


int main()
{
    int n; 
    printf("Enter no rows of the maze: ");
    scanf("%d", &n); // no of rows
    int m; 
    printf("Enter no of columns of the maze: ");
    scanf("%d", &m);
    
    int noOfways = maze(1, 1, n, m);
    printf("%d", noOfways);

    return 0;
}