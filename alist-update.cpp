#include <windows.h>

int main() {
    // 指定要打开的网页链接
    LPCSTR url = "http://localhost:5244/";

    // 使用ShellExecute函数打开默认浏览器并访问指定网页
    ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);

    return 0;
}