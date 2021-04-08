#include <iostream>
#include <string>
using namespace std;

void initialize(string s) {

}

int answerQuery(int l, int r) {
  int output = 0;
  return output;
}

int main() {
  string input;
  cin >> input;
  initialize(input);

  int num;
  cin >> num;

  for(int i = 0; i < num; i++) {
    int l, r;
    cin >> l >> r;
    cout << answerQuery(l, r) << endl;
  }

  return 0;
}