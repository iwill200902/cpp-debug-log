
#pragma once
#include <iostream>

inline void debug_log_internal(const char* file, int line, char* message ) {
    static int count = 0;
    std::cout << "Debug Log No. " << ++count
              << " (at " << file << ":" << line << ")" << std::endl;
    std::cout << "Message: " << message << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

//オーバーロード for std::string
inline void debug_log_internal(const char* file, int line, const std::string& message) {
    debug_log_internal(file, line, message.c_str());
}

#define debug_log(msg) debug_log_internal(__FILE__, __LINE__, msg)