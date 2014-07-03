#include <iostream>
#include <algorithm>
// doing basic math digit per digit
using namespace std;

void factorial (int n){
    const int MAX_DIGITS = 1000;
    int finalNumber[MAX_DIGITS];
    int carry;
    int lastIndex;
    int num;

    fill(finalNumber, finalNumber + 1000, 0);
    finalNumber[0] = 1;
    lastIndex = 0;
    for (int i = 1; i <= n; i++){
        carry = 0;
        for (int digit=0; digit <= lastIndex; digit++){
            num = finalNumber[digit]*i + carry;
            finalNumber[digit] = num % 10;
            carry = num / 10;
        }

        while (carry){
            lastIndex++;
            finalNumber[lastIndex] = carry % 10;
            carry /= 10;
        }
    }

    //cout << "LastIndex = " << lastIndex;

    for(int x = lastIndex; x >= 0; x--) cout << finalNumber[x] ;
    cout << endl;
}

int main()
{
    int inputsRemaining;
    int a;

    cin >> inputsRemaining;

    while (inputsRemaining > 0){
        cin >> a;
        factorial(a);
        inputsRemaining--;
    }
    return 0;
}
