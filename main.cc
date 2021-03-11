#include <iostream>
#include <string>

#include "snappy.h"

using namespace std;

int main(int argc, char** argv) {
  string input_string = "";

  if (argc == 1) {
    cerr << "Usage: " << argv[0] << " <input string ...>" << endl;
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    input_string.append(argv[i]);
    if (i < (argc - 1)) {
      input_string.append(" ");
    }
  }

  cout << "input has size=" << input_string.length() << ":" << endl;
  cout << input_string << endl << endl;

  string compressed;
  size_t compressed_length = snappy::Compress(input_string.data(), input_string.length(), &compressed);

  cout << "compressed output has size=" << compressed_length << ":" << endl;
  cout << compressed << endl;
}