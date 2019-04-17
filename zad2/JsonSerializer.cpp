//
// Created by venglov on 17.04.19.
//

#include "JsonSerializer.h"

JsonSerializer::JsonSerializer() = default;

#include <sstream>

std::string JsonSerializer::save() {

    std::stringstream final;

    final << "{";
    for (auto &pair : this->data) {
        final << "\"" << pair.first << "\":" << "\"" << pair.second << "\",";
    }
    final << "}";
    return final.str();
}

