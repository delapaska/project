#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintWorryCount(const vector<bool>& is_nervous) {
    // подсчитываем количество элементов в векторе is_nervous, равных true
    int worry_count = 0;
    cout << count(is_nervous.begin(), is_nervous.end(), true) << endl;

   // cout << worry_count << endl;
}

int main() {
    // не меняйте содержимое функции main
    PrintWorryCount({true, true, false, true});
    return 0;
}