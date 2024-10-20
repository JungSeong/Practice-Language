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
                std::cout << "랜덤한 숫자를 맞추세요! : " << std::endl;
                std::cin >> my_answer;

                if (my_answer < 1 || my_answer > 100){
                    std::cout << "1부터 100 사이의 숫자를 입력해주세요!" << std::endl;
                    continue;
                }

                if (my_answer < answer){
                    std::cout << "너무 낮아요!" << std::endl;
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