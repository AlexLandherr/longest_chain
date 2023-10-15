#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    struct chain_info {
        uint64_t seed_value;
        uint64_t chain_length;
    };

    func::chain_info find_longest_chain(uint64_t upper_limit);
}

#endif