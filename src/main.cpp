#include "include/functions.h"
#include <iostream>

/*
The following iterative sequence is defined for the set of positive integers:

n -> n/2 (n is even)
n -> 3n+1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 > 40 > 20 > 10 > 5 > 16 > 8 > 4 > 2 > 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

int main() {
    const uint64_t limit = 1000000;
    func::chain_info chain = func::find_longest_chain(limit);
    std::cout << "The starting number that produces the longest chain under given limit " << limit << " is: " << chain.seed_value << '\n';
    std::cout << "The lenght (aka how many elements) of the resulting chain is: " << chain.chain_length << '\n';

    return 0;
}