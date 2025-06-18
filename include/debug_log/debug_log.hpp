#pragma once
#include <iostream>
#include <string>

inline void debug_log_internal(const char* file, int line, const std::string& message) {
    static int count = 0;
    std::cout << "Debug Log No. " << ++count
              << " (at " << file << ":" << line << ")" << std::endl;
    if (!message.empty()) {
        std::cout << "Message: " << message << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;
}

// マクロで __FILE__, __LINE__ を自動で埋め込む
#define debug_log(...) debug_log_internal(__FILE__, __LINE__, ##__VA_ARGS__)
