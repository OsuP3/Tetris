#include "piece.h"

void piece::rotate(string direction){
    vector<vector<string>> NEWorientation = {4, vector<string>(4)};
    
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            NEWorientation.at(i).at(k) = orientation.at(4-k-1).at(i);
            cout<<orientation.at(4-k-1).at(i);
        }
        cout<<"\n";
    }
    orientation = NEWorientation;
}