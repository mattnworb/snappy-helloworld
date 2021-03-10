#include <iostream>
#include <string>

#include "snappy.h"

using namespace std;

int main() {
  string input_string = "hello world! abc123 abc123abc123 abc123 abc123 abc123 abc123 abc123 abc123 abc123"s;

  cout << "input is " << input_string.length() << " in size:" << endl;
  cout << input_string << endl;

  string compressed;
  size_t compressed_length = snappy::Compress(input_string.data(), input_string.length(), &compressed);

  cout << "compressed output is " << compressed_length << " in size:" << endl;
  cout << compressed << endl;
}