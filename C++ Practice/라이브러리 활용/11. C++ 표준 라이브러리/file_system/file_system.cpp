#include <iostream>
#include <string>
#include <filesystem> // 파일 시스템 헤더 파일
#include <fstream>    // 파일 입출력 헤더 파일

using namespace std;

namespace fs = filesystem;

int main() {
  // 1. 디렉터리 생성
  fs::create_directories("MyDirectory");

  // 2. 파일 생성 및 쓰기
  ofstream outFile("MyDirectory/myFile.txt"); // 파일에 내용 쓰기 : ofstream
  outFile << "Hello, FileSystem Library!" << endl; // MyDirectory/myFile.txt에 내용을 쓰기
  outFile.close(); // 파일 닫기, 파일을 열었을 때 사용한 메모리의 정리

  // 3. 디렉터리 내의 파일 확인
  cout << "Files in MyDirectory:\n";

  // directory_entry : 
  // directory_iterator : 디렉토리 반복자로 해당 디렉토리의 파일과 디렉토리 정보 제공, directory_entry 객체를 반환한다
  for (const fs::directory_entry& entry : fs::directory_iterator("MyDirectory")) {
    if (entry.is_regular_file()) { // entry가 디렉토리가 아닌 파일인지 확인
      cout << entry.path().filename() << endl;
    }
  }

  // 4. 파일 읽기 : ifstream
  ifstream inFile("MyDirectory/myFile.txt");
  string line;
  while (getline(inFile, line)) { // 파일 inFile에서 한 줄씩 읽어 string 변수 line에 저장
    cout << line << endl;
  }
  inFile.close();

  // 5. 파일 및 디렉터리 삭제
  fs::remove_all("MyDirectory");

  return 0;
}
