#include <stdio.h>

int main(){
    int amount_given,bill_amount;
    int quotient, remainder;
    scanf("%d%d",&amount_given,&bill_amount);
    quotient = amount_given / bill_amount;
    remainder = amount_given % bill_amount;
    printf("%d\n",quotient);
    printf("%d",remainder);
    return 0;
}

