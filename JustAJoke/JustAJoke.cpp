#include <iostream>
#include <Windows.h>
#include <string>
#include <Winuser.h>
using namespace std;

int lock(bool lockb = false) {
    HINSTANCE hIn = NULL;
    hIn = LoadLibrary("C:\\Windows\\system32\\user32.dll");
    if (hIn) {
        BOOL(_stdcall * BlockInput)(BOOL bFlag);
        BlockInput = (BOOL(_stdcall*)(BOOL bFlag)) GetProcAddress(hIn, "BlockInput");
        if (BlockInput) return BlockInput(lockb);
        else cout << "调用失败,无法加载BlockInput函数";
    }
    else cout << "调用失败,无法包含user32.dll";
    return -1;
}

int main()
{
    system("color 4F");
    system("title 警告！/Warning！");
    cout << "+----------------------------------------------+" << endl;
    cout << "|这个程序不是个玩笑！                          |" << endl;
    cout << "|This program is not a joke!                   |" << endl;
    cout << "+----------------------------------------------+" << endl;
    cout << "|制作者不承担任何责任！                        |" << endl;
    cout << "|The producer does not bear any responsibility!|" << endl;
    cout << "+----------------------------------------------+" << endl;
    cout << "确定要继续吗？/Are you sure to continue?" << endl;
    system("pause");
    cout << "确定要继续吗？/Are you sure to continue?" << endl;
    system("pause");
    cout << "确定要继续吗？/Are you sure to continue?" << endl;
    system("pause");
    system("cls");
    cout << "Keyboard: unlock" << endl;
    cout << "Mouse: unlock" << endl;
    cout << endl;
    cout << "正在锁定键盘……" << endl;
    cout << "Locking the keyboard..." << endl;
    system("cls");
    cout << "Keyboard: locked" << endl;
    cout << "Mouse: unlock" << endl;
    cout << endl;
    cout << "正在锁定鼠标……" << endl;
    cout << "Locking the mouse..." << endl;
    system("cls");
    system("title lol");
    cout << "Keyboard: locked" << endl;
    cout << "Mouse: locked" << endl;
    cout << endl;
    cout << "尝试解救你的电脑吧！" << endl;
    if (lock() == -1) return 0;
    lock(true);
    Sleep(15000);
    cout << "为什么不尝试一下Ctrl+Alt+Delete呢？" << endl;
    lock(true);
    system("pause");
}