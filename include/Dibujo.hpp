#pragma once
#include <fstream>
#include <iostream>
#include <string>

class Dibujo
{
private:
    std::fstream file;

public:
    Dibujo(string filePath)
    {
        file.open(filePath);
    }
    ~Dibujo()
    {
        file.close();
    }

    void Dibujar()
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }

        cout << line << endl;

    }
};
