#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> result;
    for (auto& person : people) {
        person.birthday();
    }

    // Iterowanie od końca i sprawdzanie warunku isMonster
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        result.push_back(it->isMonster() ? 'n' : 'y');
    }

    return result;
}
