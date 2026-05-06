#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  ifstream file("src/main.cpp");
  string line;
  string pattern = "include";

  if (!file)
  {
    cerr << "Unable to open file\n";
    return 2;
  }

  while (getline(file, line))
  {
    if (line.find(pattern) != string::npos)
    {
      cout << line << "\n";
    }
  }
  return 0;
}