#include <iostream>

using namespace std;

int main() {
  try {
    int input;
    cout << "���� �� �ϳ��� �Է��ϼ��� : ";
    cin >> input;

    // �Է¹��� ���ڰ� ����̸�
    if (input > 0) {
      cout << "throw 1" << endl;
      throw 1;      // ���� 1 �߻�(���� ���� ����)
      cout << "after throw 1" << endl;
    }

    // �Է¹��� ���ڰ� �����̸�
    if (input < 0) {
      cout << "throw -1.0f" << endl;
      throw - 1.0f;   // ���� 1.0f �߻�(�ε��Ҽ��� ���� ����)
      cout << "after throw -1.0f" << endl;
    }

    // �Է¹��� ���ڰ� 0�̸�
    if (input == 0) {
      cout << "throw Z" << endl;
      throw 'Z';    // ���� Z �߻�(���� ���� ����)
      cout << "after throw Z" << endl;
    }
  }
  catch (int a) {   // ���� ���� ���� �ޱ�
    cout << "catch " << a << endl;
  }
  catch (float b) {   // �ε��Ҽ��� ���� ���� �ޱ�
    cout << "catch " << b << endl;
  }
  catch (char c) {   // ���� ���� ���� �ޱ�
    cout << "catch " << c << endl;
  }

  return 0;
}
