#include <stdio.h>

int main() {
    int count =100;
    int ages[count];
    for(int i=0;i<count;i++){
        ages[i]=0;
    }
    ages[3]=6;
    ages[6]=101;
    ages[50]=100;
    ages[100]=99;
    int oldest=0;
    int secondOldest=0;

    for(int i=0; i<count;i++){
        if(ages[i]>oldest){
            secondOldest=oldest;
            oldest=ages[i];
        } else if(ages[i]>secondOldest){
            secondOldest=ages[i];
        }
    }

    printf("%d",secondOldest);

    return 0;
}