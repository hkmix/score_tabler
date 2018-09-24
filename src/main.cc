#include <iostream>

#include "src/util/data.hh"
#include "src/util/serialization.hh"

namespace {

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& vec)
{
    out << '[';

    if (vec.size() > 0) {
        out << vec[0];
    }

    for (int i = 1; i < vec.size(); ++i) {
        out << ", " << vec[i];
    }

    out << ']';

    return out;
}

} // namespace

int main()
{
    util::Data d;
    d.players.emplace_back("Jack");
    d.players.emplace_back("Jill");
    d.rounds.emplace_back(std::vector<int>{{12, 19}}, "");
    d.rounds.emplace_back(std::vector<int>{{10, 9}}, "");

    std::cout
        << "json: " << util::to_json(d).dump(2) << '\n'
        << "sums: " << d.sums() << '\n';

    return 0;
}
