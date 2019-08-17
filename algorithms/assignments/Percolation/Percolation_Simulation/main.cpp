#include <QCoreApplication>
#include <iostream>

void monte_carlo_loop(int x)
{
    int loop_num = 1;
    while(x)
    {
        std::cout << "Loop : " << loop_num++ << std::endl;
        --x;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // monte_carlo_loop(std::stoi(argv[1]));
    monte_carlo_loop(123);


    return a.exec();
}

