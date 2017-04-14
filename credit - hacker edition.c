# C-Language
CS50 Harvard

#include<stdio.h>
#include<cs50.h>
#include<math.h>

/* The program determinate if the credit card number is valid & check for card maker
                            
                                CS50 hacker problem set

Wojciech Kurylo
wkurylo88@gmail.com

*/

int main(void)
{
   long long cc;
   do
    {
        printf("Credit Card Number: \n");        // Insert credit card number until cc > 0
        cc = get_long_long();
    }
    while(cc <= 0);
    long long ccCopy = cc;   // Copy of cc to use it after the while because cc will be 0
    int lenght = 0;
    int sumOdd = 0;
    int sumEven = 0;
    while (cc > 0)   // While cc > 0 calculate the lenght of number && calculate the sum
    {
        int calDigit = cc % 10;
        if(lenght % 2 !=0)
        {
            int calDigitTwice = calDigit * 2;
            sumEven = sumEven + (calDigitTwice / 10) + (calDigitTwice % 10);
        }
        else
        {
            sumOdd += calDigit;
        }
        lenght += 1;
        cc = cc/10;
    }                                                         // cc == 0 that is why we use ccCopy && lenght == number lenght
    int sumAll = sumEven + sumOdd;
    int lastCheck = sumAll % 10;
    int firstDigit = (ccCopy / pow(10.0, lenght-1));           // last digit of sumAll && Fist, Second digit
    int secondDigit1 = (ccCopy / pow(10.0, lenght-2));
    int secondDigit = secondDigit1 % 10;
    
    if(lastCheck != 0)
    {
        printf("INVALID\n");    // while lastCheck != 0 : print INVALID && stop the program
        return 0;
    }
    
    switch(lenght)        // for lenght : 13, 15, 16. If diferent, print INVALID
        {
            case 13 :
                if(firstDigit == 4)
                {
                    printf("VISA\n");
                    break;
                }
            case 15 :
                if(firstDigit == 3 && (secondDigit == 4 || secondDigit == 7))
                {
                    printf("AMEX\n");
                    break;
                }
            case 16 :
                if(firstDigit == 4)
                {
                    printf("VISA\n");
                    break;
                }
                else if(firstDigit == 5 && (secondDigit >= 1 && secondDigit <= 5))
                {
                    printf("MASTERCARD\n");
                    break;
                }
            default:
                printf("INVALID\n");
        }
    return 0;
}
