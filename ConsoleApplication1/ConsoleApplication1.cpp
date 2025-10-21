// STL
#include <iostream>
#include <string>

// App Includes
#include "Arm.hpp"
#include "DecoratorExample1.hpp"
#include "DecoratorExample2.hpp"

bool isPlaying = true;

int main()
{
    std::cout << "Choose unlocked competence then press enter (space separated)\n" 
        << "  1: Example1\n" 
        << "  2: Example2\n" 
        << "\n  0: Exit the Program\n"
        << "Please enter your choice: ";

    while(isPlaying){
        int buffer;
        if (!(std::cin >> buffer)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        Arm* arm = new Arm();

        switch (buffer) {
        case 0:
            isPlaying = false;
            break;
        case 1:
            arm.Decorator = new DecoratorExample1(arm.Decorator);
        case 2:
            arm.Decorator = new DecoratorExample2(arm.Decorator);
        }

        arm.Input();
    }



    return 0;
}

