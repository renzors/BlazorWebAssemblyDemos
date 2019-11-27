#include <stdio.h>

void printFibonacci(int numberOfTerms){
    int prev = 0, current = 1;

    while (numberOfTerms-- > 0){
        printf("%d\n", current);

        int next = prev + current;
        prev = current;
        current = next;
    }
}

int main(){
    printFibonacci(10);
    return 0;
}