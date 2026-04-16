#include <iostream>

// sert a dire que les utilité et les fonction normale comme: cout, std::cin , etc...
// utilisés eux libéramenent sont declarer sont ojbect parent qui est: std.
// résume: au lieu de std::std::cout -> cout.
using namespace std;

int main(int argc, char *argv[]) {
  char name;
  std::cout << "hello world" << std::endl;
  std::cin >> name;
  std::cout << name;
  return 0;
}
