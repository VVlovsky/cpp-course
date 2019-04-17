//
// Created by venglov on 17.04.19.
//

#include "XmlSerializer.h"
#include <sstream>

XmlSerializer::XmlSerializer() = default;

std::string XmlSerializer::save() {

    std::stringstream final;

    final << R"(<?xml version="1.0" encoding="UTF-8"?>)" << std::endl;
    final << "<object>" << std::endl;
    for (auto &pair : this->data) {
        final << "  <" << pair.first << ">" << pair.second << "</" << pair.first << ">" << std::endl;
    }
    final << "</object>";

    return final.str();
}

