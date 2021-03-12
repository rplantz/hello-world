/* addNine.c
 * Sums nine integers and returns the sum.
 * I'll make a change 3/12 AM.
 */
 
#include <stdio.h>
#include "addNine.h"

int addNine(int one, int two, int three, int four, int five,
           int six, int seven, int eight, int nine)
{
    int sum;

    sum = one + two + three + four + five + six
            + seven + eight + nine;
    return sum;
}

