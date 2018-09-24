#include "src/util/data.hh"

namespace util {

std::vector<int> Data::sums() const
{
    const auto size = players.size();
    std::vector<int> ret(size, 0);

    for (const auto& round : rounds) {
        // Ignore invalid entries.
        if (round.scores.size() != size) {
            continue;
        }

        for (int i = 0; i < size; ++i) {
            ret[i] += round.scores[i];
        }
    }

    return ret;
}

} // namespace util
