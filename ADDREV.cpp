#include <iostream>
#include <vector>

using namespace std;

int reverseNumber(int n){
    int temp;
    vector<int> numbers;
    do{
        temp = n %10;
        numbers.push_back(temp);
        n /= 10;
    }
    while ( n );

    int factor = 1;
    int ret = 0;
    for (int i = numbers.size()-1; i >= 0 ; i--){
        ret += numbers.at(i) * factor;
        factor *= 10;
    }
    return ret;
}

int main()
{
    int inputsRemaining;
    int a,b,x,y;

    cin >> inputsRemaining;

    while (inputsRemaining > 0){

        cin >> a;
        cin >> b;

        x = reverseNumber(a);
        y = reverseNumber(b);


        cout << reverseNumber(x+y) << endl;
        inputsRemaining--;
    }
    return 0;
}
