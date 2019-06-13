#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
    // char fizzBuzz[8] = "fizzbuzz";
    // char fizz[4] = "fizz";
    // char buzz[4] = "buzz";
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("fizzBuzz");
        }
        else if (i % 5 == 0)
        {
            printf("fizz");
        }
        else if (i % 3 == 0)
        {
            printf("buzz");
        }
        else
        {
            count++;
        }
        printf("\n");
    }
    return count;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
