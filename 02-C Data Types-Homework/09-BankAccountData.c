#include <stdio.h>

/*
 * A bank account has a holder name (first name, middle name and last name),
 * available amount of money (balance),bank name, IBAN and 3 credit card 
 * numbers associated with the account. Declare the variables needed to keep
 * the information for a single bank account using the appropriate data
 * types and descriptive names.
 */
int main() 
{
    char *holderFirstName = "Pesho";
    char *holderMiddleName = "Peshev";
    char *holderLastName = "Peshev";
    long double holderBalance = 123.8965;
    char *bankName = "Unicredit Bulbank";
    char *holderIBAN = "BG80 BNBG 9661 1020 3456 78 ";
    unsigned long firstCardNum = 12325455234;
    unsigned long secondCardNum = 89516648536;
    unsigned long thirdCardNum = 56987456215;
    
    printf("Bank: %s\n", bankName);
    printf("Account holder name: %s %s %s\nIBAN: %s\n",
            holderFirstName, 
            holderMiddleName,
            holderLastName,
            holderIBAN);
    printf("Balance: %.5Lf\n", holderBalance);
    printf("Credit card numbers: %Ld, %Ld, %ld\n", 
            firstCardNum, 
            secondCardNum,
            thirdCardNum);
    
    return 0;
}

