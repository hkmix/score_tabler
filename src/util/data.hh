#ifndef UTIL_DATA_H_
#define UTIL_DATA_H_

#include <ostream>
#include <string>
#include <vector>

namespace util {

struct Data {
    struct Round {
        Round(std::vector<int>&& in_scores, std::string&& in_comment)
        : scores{in_scores}
        , comment{in_comment}
        {
        }

        std::vector<int> scores;
        std::string comment;
    };

    std::vector<std::string> players;
    std::vector<Round> rounds;

    std::vector<int> sums() const;
};

} // namespace util

#endif // UTIL_DATA_H_
