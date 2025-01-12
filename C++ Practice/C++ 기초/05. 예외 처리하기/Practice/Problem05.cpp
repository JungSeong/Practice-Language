#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);
    int answer = dist(gen);
    int my_answer;

    bool is_correct = false;
    while (!is_correct) {
        try{
            for (int i=0; i<3; i++)
            {
                std::cout << "������ ���ڸ� ���߼���! : " << std::endl;
                std::cin >> my_answer;

                if (my_answer < 1 || my_answer > 100){
                    std::cout << "1���� 100 ������ ���ڸ� �Է����ּ���!" << std::endl;
                    continue;
                }

                if (my_answer < answer){
                    std::cout << "�ʹ� ���ƿ�!" << std::endl;
                    continue;
                } 
            }
        }
        catch (const std::exception& e){

            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}