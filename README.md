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

## 📂 導入方法 / Installation

### ✅ 方法①：ファイルを直接コピー（簡単）

`include/debug_log/debug_log.hpp` を自分のプロジェクトにコピーしてください。  
`#include <debug_log/debug_log.hpp>` で使えます。

### ✅ 方法②：CMakeで追加

CMakeプロジェクトにサブディレクトリとして追加して使えます：

```cmake
add_subdirectory(cpp-debug-log)
target_link_libraries(your_target PRIVATE debug_log)
```

---

## 🔧 カスタマイズ例 / Customization Ideas

- ログレベル（INFO, WARN）をつける
- 時刻やスレッドIDも出す
- `#ifdef DEBUG` でON/OFF切り替え

Pull requests & improvements welcome!

---

## 📄 ライセンス / License

このリポジトリは [MIT License](LICENSE) です。商用・非商用問わずご自由にどうぞ。
