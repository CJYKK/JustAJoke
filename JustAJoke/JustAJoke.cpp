#include <iostream>
#include <Windows.h>
#include <Winuser.h>
using namespace std;

int main()
{
    system("color 4F");
    system("title 警告！/Warning！");
    cout << "+-----------------------------------------------+" << endl;
    cout << "|这个程序不是个玩笑！                           |" << endl;
    cout << "|This program is not a joke!                    |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "|制作者不承担任何责任！                         |" << endl;
    cout << "|The producer does not bear any responsibility! |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << "确定要继续吗？/Are you sure to continue?" << endl;
        system("pause");
    }
    system("cls");
    system("title lol");
    cout << "Keyboard: LOCKED" << endl;
    cout << "Mouse: LOCKED" << endl;
    cout << endl;
    cout << "+-----------------------------+" << endl;
    cout << "|尝试解救你的电脑吧！         |" << endl;
    cout << "|Try to rescue your computer! |" << endl;
    cout << "|ヾ(≧▽≦*)o                 |" << endl;
    cout << "+-----------------------------+" << endl;
    BlockInput(true);
    Sleep(15000);
    cout << "+-------------------------------------+" << endl;
    cout << "|为什么你不尝试一下Ctrl+Alt+Delete呢？|" << endl;
    cout << "|Why don't you try Ctrl+Alt+Delete?   |" << endl;
    cout << "+-------------------------------------+" << endl;
    Sleep(45000);
    cout << "+-------------------------------------------------+" << endl;
    cout << "|看起来你不会啊……那我就放过你吧！               |" << endl;
    cout << "|It looks like you can't... Then I'll let you go! |" << endl;
    cout << "+-------------------------------------------------+" << endl;
    BlockInput(false);
    system("pause");
}