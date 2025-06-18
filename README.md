# cpp-debug-log

## 📝 概要（日本語）

このリポジトリは、**C++でデバッグログを簡単に出したい人向け**のヘッダファイルです。  
`debug_log()` というマクロを使うだけで、次のようなログが出力されます：

- ログの番号（1つ目、2つ目…）
- 呼び出した場所（ファイル名と行番号）
- メッセージの内容

### 🔧 特徴

- ヘッダーファイルだけで使えます（ビルド不要）
- `const char*` と `std::string` 両方に対応
- CMakeにも対応していて、プロジェクトに組み込みやすいです

---

## ✨ Overview (English)

This is a small debug log macro for C++ that automatically shows:

- Log number (1st, 2nd, 3rd…)
- File name and line number
- Message you passed

### 🔧 Features

- Just a single header — no compilation needed
- Works with both `const char*` and `std::string`
- Easy to add to CMake projects

---

## 📦 使い方 / How to Use

```cpp
#include <debug_log/debug_log.hpp>

int main() {
    debug_log("最初のログです");

    std::string msg = "string型にも対応してます";
    debug_log(msg);
}
