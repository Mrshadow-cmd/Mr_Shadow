#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num()
{
    srand(time(0));
    long int n = rand() % 200*125;
    // printf("%d",n);
    return n;
    
}
void main()
{
    int a, b ,c;
    while (1)
    {
        printf("Enter the number as per choice \n1. Check Balance\n2. Deposite\n3. Withdraw\n4. Exite\n: ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("Your Balance: %ld\n\n",num());
            break;
        case 2:
            printf("Enter amount you want to Deposite: ");
            scanf("%d", &b);
            printf("Rs %d Depodsited successfully\n\n ", b);
            break;
        case 3:
            printf("Enter amount you want to withdraw: ");
            scanf("%d", &b);
            printf("Rs %d withdrawed successfully\n\n", b);
            break;
        case 4:
            break;
        }
    }
}