#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> numbers;
  int input;
  do{
    cin >> input;
    numbers.push_back(input);
  }
  while (input != 42);

  for (int i = 0; i < numbers.size()-1; i++)
    cout << numbers.at(i) << endl;

  return 0;
}

