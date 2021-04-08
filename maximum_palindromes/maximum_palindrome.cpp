#include <iostream>
#include <string>
using namespace std;

const int mod_prime = 1000000007;
const int max_n = 100000;
const int max_l = 26;
int counts[max_n][max_l] = {0};
int even_count[max_l] = {0};
int facts[max_n];
int invs[max_n];

void initialize(string s) {
  counts[0][s[0] - 'a'] = 1;
  facts[0] = 1;
  for (int i = 1; i < s.length(); i++) {
    for (int j = 0; j < max_l; j++) {
      counts[i][j] = counts[i - 1][j];
    }
    counts[i][s[i] - 'a']++;
  }
}

int answerQuery(int l, int r) {
  int output = 1;
  int num_odds = 0;
  int num_evens = 0;

  for (int i = 0; i < max_l; i++) {
    int count = counts[r][i] - counts[l][i];
    num_odds += count % 2;
    even_count[i] = count / 2;
    num_evens += even_count[i];
  }

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