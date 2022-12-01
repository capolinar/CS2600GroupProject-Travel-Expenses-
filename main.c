#include "prompt.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int dTime, aTime;

    departTime(&dTime, &aTime);

    printf("Departure Time: %d\n Arrive Time: %d\n", dTime, aTime);
    return 0;
}
