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
