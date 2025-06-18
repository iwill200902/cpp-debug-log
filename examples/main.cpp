#include <debug_log/debug_log.hpp>
#include <string>

int main() {
    // 引数なし：ログ番号と位置だけ出力されます
    // No arguments: prints only the log number and location
    debug_log();

    // const char* 型のメッセージ付きログ
    // With a const char* message
    debug_log("最初のログです"); // "This is the first log."

    // std::string 型のメッセージ付きログ
    // With a std::string message
    std::string msg = "これは std::string 型です"; // "This is a std::string message."
    debug_log(msg);

    return 0;
}
