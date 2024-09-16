#include <iostream>
using namespace std;

enum GameMode{
    Easy=1,
    Medium=5,
    Hard=10,
};

int main(void){
    GameMode Skibidi = Medium;
    switch(Skibidi){
        case Easy:
        cout<<"Game mode selected: Easy, wittle baby boo boo only can deal with "<<Skibidi<<"enemy at a time"<<endl;
        break;
        case Medium:
        cout<<"Game mode selected: Medium, good luck, expect "<<Skibidi<< " times more enemies than easy"<<endl;
        break;
        case Hard:
        cout<<"Game mode selected: Hard, good luck brave soldier, expect "<<Skibidi<< " times more enemies than easy"<<endl;
        break;
    }

    
    return 0; 
}