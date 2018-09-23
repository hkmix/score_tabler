#include <iostream>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main()
{
    json j;
    j["test"] = "Hello, World!";
    std::cout << j.dump(4) << '\n';

    return 0;
}
