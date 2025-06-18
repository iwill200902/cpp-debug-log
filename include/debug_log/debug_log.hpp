#pragma once
#include <iostream>
#include <string>

namespace debug_log_internal_ns {
    inline int& get_count() {
        static int count = 0;
        return count;
    }
}

inline void debug_log_internal(const char* file, int line) {
    int& count = debug_log_internal_ns::get_count();
    std::cout << "Debug Log No. " << ++count
              << " (at " << file << ":" << line << ")" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

inline void debug_log_internal(const char* file, int line, const std::string& message) {
    int& count = debug_log_internal_ns::get_count();
    std::cout << "Debug Log No. " << ++count
              << " (at " << file << ":" << line << ")" << std::endl;
    if (!message.empty()) {
        std::cout << "Message: " << message << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;
}

// マクロで __FILE__, __LINE__ を自動で埋め込む
#define debug_log(...) debug_log_internal(__FILE__, __LINE__, ##__VA_ARGS__)
