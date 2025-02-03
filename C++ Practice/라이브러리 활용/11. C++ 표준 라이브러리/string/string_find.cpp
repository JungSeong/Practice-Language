#include <iostream>
#include <string>

using namespace std;

void check_found(string::size_type n) {
  if (n == string::npos) {
    cout << "not found" << endl;
  }
  else {
    cout << "found index: " << n << endl;
  }
}

int main() {
  string::size_type n;
  string str = "This is an example of a standard string.";

  // ���ڿ� ���� �������� "example" Ž��
  n = str.find("example");
  check_found(n);

  // ���ڿ� ���� �������� "is" Ž��
  n = str.find("is");
  check_found(n);

  // ���ڿ� �� index ��ġ 4���� "is" Ž��
  n = str.find("is", 4);
  check_found(n);

  // ���ڿ� ���� �������� 'h' Ž��
  n = str.find('h');
  check_found(n);

  // ���ڿ� ���� �������� 'k' Ž��
  n = str.find('k');
  check_found(n);

  return 0;
}
