/*The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

     1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28

We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?*/
#include <iostream>
using namespace std;

int divisorNumber(long long number)
{
    int numberOfDivisors=1;
    long long powersList[20]{},powersListCellNumber=0,pDivisor;
                                                                    //"powersList" lists numbers of powers that we need for the equation
                                                                    //"powersListCellNumber" is describing which cell of "powerList" are we using
                                                                    //"pIterator" is short for "previous Iterator"
    for (long long divisor=2;i<=number;divisor++)
    {
        if (number%i==0)
        {
            number=number/divisor;                                  //divide number by the Iterator
            if (pDivisor!=divisor)                                  // if the previous divisor isn't the same as the current one, then
            {
                powersListCellNumber++;                             //iterate the "powersListCellNumber". Which roughly translates to
                                                                    //"If you can no longer divide the number by x, then change the cell in which you record how many
                                                                    // times you divided the number by x"
            }
            powersList[powersListNumber]++;                         //iterate the number in the current cell of the list
            pDivisor=divisor;                                       //change the previous divisor for a current one
            divisor--;                                              //"Why deiterate the divisor?" you ask. It's simple, you do it, becouse the for loop
                                                                    // iterates the divisor every single time, and you want to know, if you can divide
                                                                    //the number by the same divisor one more time
        }
        else;
    }
    for (int i=0; i<20;i++)                                         //The number 20 in here and in "powersList[20]" is fixed. It's here for now, don't change it
                                                                    //unless you know that there are more than 20 different powers of different number divisors
    {
        //cout << powersList[i] << '\n';
        if (powersList[i]!=0)
        {
        numberOfDivisors=numberOfDivisors*(powersList[i]+1);        //this is a tricky one, it translates to NumberOfDivisors= (powerOfTheFirstDivisor+1)*(powerOfTheSecondDivisor+1)*(..)

        }
    }
    //cout << numberOfDivisors << '\n';
    //cout << "END" << '\n';
    return numberOfDivisors;
}

int main()
{
    long long tNumber=0,c=0;
    do
    {
        c++;
        tNumber+=c;
        //cout << "TNumber" << tNumber << '\n';
    }
    while (divisorNumber(tNumber)<500);
    cout << tNumber;
    return 0;
}
