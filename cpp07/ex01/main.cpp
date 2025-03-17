#include "iter.hpp"


int main( void )
{
    int arr[] = {1, 2, 3, 4};
    ::iter(arr, 2, print<int>);
    return 0;
}
