#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <vector>

using namespace std;

class piece{
    public:

    void rotate(string direction);
    private:
        vector<vector<string>> orientation = {{"x", "L", "L", "L"},
                                              {"L", "L", "L", "L"},
                                              {"L", "L", "L", "L"},
                                              {"x", "L", "L", "L"}};
        bool initiated = false;
                              
};  

#endif//PIECE_H