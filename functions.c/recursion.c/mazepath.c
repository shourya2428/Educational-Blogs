#include<stdio.h>//down ,right with 1 step at a time.
int  maze(int cr,int cc,int er,int ec){
    int rightways = 0;
    int downways = 0;
    if(cr == er && cc == ec)return 1;
    //cr=current row,cc=current column,er=ending row,ec=ending column
    if(cr == er){//only rightways call
    rightways += maze(cr,cc+1,er,ec);
    }

    if(cc == ec){//only downwards call
    downways += maze(cr+1,cc,er,ec);
}
if(cr<er && cc<ec){
    rightways += maze(cr,cc+1,er,ec);

    downways += maze(cr+1,cc,er,ec);
}
int totalways = rightways + downways;
return totalways;
}