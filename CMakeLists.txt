cmake_minimum_required(VERSION 3.10)
project(DebugLogProject)

# ライブラリ（ヘッダオンリーなのでINTERFACEで定義）
add_library(debug_log INTERFACE)

# ヘッダファイルのディレクトリをライブラリに紐付け
target_include_directories(debug_log INTERFACE debug_log)

# main.cpp をビルドして実行ファイルを作る
add_executable(main main.cpp)

# main に debug_log ライブラリ（ヘッダ）をリンクする
target_link_libraries(main PRIVATE debug_log)
