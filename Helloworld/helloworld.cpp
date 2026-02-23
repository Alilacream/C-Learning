#include <iostream>

// sert a dire que les utilité et les fonction normale comme: cout, cin , etc...
// utilisés eux libéramenent sont declarer sont ojbect parent qui est: std.
// résume: au lieu de std::cout -> cout.
using namespace std;

int main(int argc, char *argv[]) {
  char name;
  cout << "hello world" << endl;
  cin >> name;
  cout << name;
  return 0;
}
