#include "include/functions.h"
#include <cstdint>
#include <vector>

namespace func {
    func::chain_info find_longest_chain(uint64_t upper_limit) {
        //Max chain length.
        uint64_t max_chain_length = 0;

        //Seed value that gives maximum chain lenght for given upper limit.
        uint64_t max_chain_length_seed_value = 0;

        //Search loop(s).
        for (uint64_t i = (upper_limit - 1); i > 0; i--) {
            std::vector<uint64_t> temp_chain;
            temp_chain.push_back(i);
            
            while (true) {
                if (temp_chain.back() == 1) {
                    break;
                } else if (temp_chain.back() % 2 == 0) {
                    temp_chain.push_back(temp_chain.back() / 2);
                } else { //If previous value is odd.
                    temp_chain.push_back((3 * temp_chain.back()) + 1);
                }
            }

            //Check if temp_chain length is greater than max_chain_length.
            if (static_cast<uint64_t>(temp_chain.size()) > max_chain_length) {
                max_chain_length = static_cast<uint64_t>(temp_chain.size());
                max_chain_length_seed_value = i;
            }
        }

        func::chain_info result = {.seed_value = max_chain_length_seed_value, .chain_length = max_chain_length};

        return result;
    }
}