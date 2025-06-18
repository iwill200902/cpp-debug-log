# cpp-debug-log

## 📝 概要（日本語）

このリポジトリは、**C++でデバッグログを簡単に出したい人向け**のヘッダファイルです。  
`debug_log()` というマクロを使うだけで、次のようなログが出力されます：

- ログの番号（1つ目、2つ目…）
- 呼び出した場所（ファイル名と行番号）
- メッセージ（引数がある場合）

### 🔧 特徴

- ヘッダーファイルだけで使えます（ビルド不要）
- `const char*`、`std::string`、引数なしにも対応
- CMakeにも対応していて、プロジェクトに組み込みやすいです

---

## ✨ Overview (English)

This is a small debug log macro for C++ that automatically shows:

- Log number (1st, 2nd, 3rd…)
- File name and line number
- Message if given

### 🔧 Features

- Just a single header — no compilation needed
- Works with `const char*`, `std::string`, or no argument
- Easy to add to CMake projects

---

## 📦 使い方 / How to Use

```cpp
#include <debug_log/debug_log.hpp>

int main() {
    debug_log(); // 引数なしでも使えます
    debug_log("最初のログです");

    std::string msg = "string型にも対応してます";
    debug_log(msg);
}
```

### ▶️ 出力例 / Example Output

```
Debug Log No. 1 (at main.cpp:4)
----------------------------------------
Debug Log No. 2 (at main.cpp:6)
Message: 最初のログです
----------------------------------------
Debug Log No. 3 (at main.cpp:9)
Message: string型にも対応してます
----------------------------------------
```

---

## 📂 導入方法 / How to Install

### ✅ 手順①：ヘッダファイルをコピーする

`include/debug_log/debug_log.hpp` をプロジェクト内にコピーし、以下のようにインクルードしてください：  

```cpp
#include <debug_log/debug_log.hpp>
```

### ✅ 手順②：CMakeプロジェクトに手動で組み込む

CMakeLists.txt に以下を追加してください。  
（your_target は自分の実行ファイル名に置き換えてください）

```cmake
add_library(debug_log INTERFACE)
target_include_directories(your_target PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
```

---

### ✅ Method 1: Copy the file directly

Copy `include/debug_log/debug_log.hpp` into your project.  
Then, include it with:

```cpp
#include <debug_log/debug_log.hpp>
```

### ✅ Method 2: Manually add to your CMake project

Then, simply register the include path like this:  
(Replace `your_target` with your actual executable name)

```cmake
add_library(debug_log INTERFACE)
target_include_directories(your_target PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
```

---

## 📄 ライセンス / License

このリポジトリは [MIT License](LICENSE) です。商用・非商用問わずご自由にどうぞ。

This repository is licensed under the [MIT License](LICENSE).  
Feel free to use it for both personal and commercial projects.
