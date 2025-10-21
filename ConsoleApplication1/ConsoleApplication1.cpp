// STL
#include <iostream>
#include <string>

// App Includes
#include "Arm.hpp"
#include "DecoratorExample1.hpp"
#include "DecoratorExample2.hpp"
#include <vector>

bool isPlaying = true;

int main()
{
    while(isPlaying){
        std::cout << "Choose unlocked competence then press enter (space separated)\n"
            << "  1: Example1\n"
            << "  2: Example2\n"
            << "\n  0: Exit\n"
            << "Please enter your choice: ";

        std::string buffer;
        std::getline(std::cin, buffer);
        if (!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        Arm* arm = new Arm();

        int n = 0;

        std::vector<int> entries;

        if(!buffer.empty()){
            for (const char* c = buffer.c_str(); *c != 0; ++c)
            {
                if (*c == ' ')
                {
                    entries.push_back(n);
                    n = 0;
                    continue;
                }

                n *= 10;
                n += c[0] - '0';
            }

            entries.push_back(n);

            for(auto entry : entries){
                switch (entry) {
                case 0:
                    isPlaying = false;
                    break;
                case 1:
                    arm->Decorator = new DecoratorExample1(arm->Decorator);
                    break;
                case 2:
                    arm->Decorator = new DecoratorExample2(arm->Decorator);
                    break;
                }
            }
        }

        arm->Input();
    }

    return 0;
}

