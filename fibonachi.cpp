// fibonachi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <vector>

void FibonachiFunction(int fibonachiMax, std::vector <int> &fibVector) {
    int sum = 1;
    int sumPrev = 1;
    
    for (int i = 3;sum <= fibonachiMax; ++i) {

        int temp = sum;
        sum = sumPrev + sum;
        sumPrev = temp;
        if(sum<=fibonachiMax)
            fibVector.push_back(sum); 
    }
}
void PrintFibonachi(std::vector<int>& fibVector) {
    for (int i = 0;i < fibVector.size();++i) {
        std::cout << fibVector[i] << " \n";
    }
}

int main()
{
    std::vector<int>fibVector{0,1,1};
    int fibonachiMax;
    std::cout << "Enter max number Fibonachi!\n";
    
    try {
        std::cin >> fibonachiMax;
        if (fibonachiMax >= 2) {
            FibonachiFunction(fibonachiMax, fibVector);
            PrintFibonachi(fibVector);
        }
        else throw(fibonachiMax);
    }
    
    catch (int fibNo) {
            std::cout << "Enter max number Fibonachi>2!\n";
            std::cout << fibNo << " - Not corection";
    }
}

