#include "Events.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void tratamento(void *arg){
    int *x=(int*)arg;
    FILE *F = fopen("log.txt","a+");
    if(*x==13)
        fprintf(F,"\n");
    else
        fprintf(F,"%c",*x);
    cout<<*x<<endl;
    fclose(F);
}

Events x;

int main(){
    x.OnKeyMonitor(tratamento);
    while(true){
        int z;
        cin>>z;        
    }
}