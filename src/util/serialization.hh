#ifndef UTIL_SERIALIZATION_H_
#define UTIL_SERIALIZATION_H_

#include "src/util/data.hh"

#include <nlohmann/json.hpp>

namespace util {

void to_json(nlohmann::json& j, const util::Data::Round& round)
{
    j = nlohmann::json{
        {"scores", round.scores},
        {"comment", round.comment},
    };
}

void from_json(nlohmann::json& j, util::Data::Round& round)
{
    round.scores = j.at("scores").get<std::vector<int>>();
    round.comment = j.at("comment").get<std::string>();
}

nlohmann::json to_json(const util::Data& data)
{
    nlohmann::json j;
    j["players"] = data.players;
    j["rounds"] = data.rounds;

    return j;
}

} // namespace util

#endif // UTIL_SERIALIZATION_H_
