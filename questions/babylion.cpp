#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
    double n;
    cin>>n;
    double guess = n/2,pguess=0;
    while(pguess = 0 || abs(guess-pguess)/pguess>=0.01){
        pguess = guess;
        double r = n/guess;
        guess = (guess+r)/2;

    }
    printf("The final guess is %.3f\n",guess);




    return 0 ;
}