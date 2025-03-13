#include<iostream>
int main()
{
    //example 1
    auto printHello = []()->void{
        std::cout<<"Hello"<<std::endl;
    };
    printHello();

    //example 2 : lambda funtion with parameters
    auto add = [](int a, int b)->int{
        return a+b;
    };
    int result = add(5, 7);
    std::cout<<result<<std::endl;

    //example 3 : capture by value
    int multiplier = 3;
    auto times = [multiplier](int a)->int{
        return a*multiplier;
    };
    std::cout<<times(5)<<std::endl;

    //example 4 : capture by reference
    int expiresInDays = 45;
    auto updateDays = [&expiresInDays](int newDays)->void{
        expiresInDays = newDays;
    };
    updateDays(30);
    std::cout<<expiresInDays<<std::endl;

    return 0;
}