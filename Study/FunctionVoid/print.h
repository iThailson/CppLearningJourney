#pragma once
#include <iostream>
#include <string>
static void print(const std::string& text) {
    std::cout << text;
    if (!text.empty() && text.back() == '\n') std::cout << std::flush;
}
