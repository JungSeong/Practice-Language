#include <iostream>

using namespace std;

int main() {
  try {
    int input;
    cout << "���� �� �ϳ��� �Է��غ����� : ";
    cin >> input;

    // �Է¹��� ���ڰ� ����̸�
    if (input > 0) {
      cout << "throw 1" << endl;
      throw 1;   // ���� 1 �߻�(���� ���� ����)
    }

    // �Է¹��� ���ڰ� �����̸�
    if (input < 0) {
      cout << "throw -1.0f" << endl;
      throw - 1.0f;   // ���� 1.0f �߻�(�ε��Ҽ��� ���� ����)
    }

    // �Է¹��� ���ڰ� 0�̸�
    if (input == 0) {
      cout << "throw Z" << endl;
      throw 'Z';   // ���� Z �߻� (���� ���� ����)
    }
  }
  catch (int a) {   // ���� ���� ���� �ޱ�
    cout << "catch " << a << endl;
  }
  catch (...) {   // ó������ ���� ������ ���� ��� �ޱ�
    cout << "catch all" << endl;
  }

  return 0;
}
