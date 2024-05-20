#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
    mt19937 generator(static_cast<unsigned int>(time(NULL)));  // 設置隨機數生成器和分佈
    uniform_int_distribution<int> distribution(1, 100);

    int target_number = distribution(generator), guess, times = 0; //生成隨機數

    cout << "input the number between 0 ~ 100 \n";
    while (true)
    {
        cout << "the number you guess\n";
        cin >> guess;
        times++;
        if (guess > target_number) { cout << "too much\n"; }
        else if (guess <target_number) { cout << "too less\n"; }
        else { cout << "bingo，you guess" << times << "times。\n"; break; }
    }
    return 0;
}   

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
