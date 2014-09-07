#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    printf("Hello world!");                   // 教科书的写法
    puts("Hello world!");                     // 我最喜欢的
    puts("Hello" " " "world!");               // 拼接字符串
    std::cout << "Hello world!" << std::endl; // C++风格的教科书写法
    cout<<"o"<<endl;
    system("pause");
    return 0;
}