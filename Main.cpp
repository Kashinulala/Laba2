#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

//Base class
class transport{
    public:
        short unsigned int capacity;
        short unsigned int max_speed;
    
    void load_pas(short unsigned int pas_count){
        if(pas_count <= capacity){
            cout << "Passangers loaded" << endl;
        }
        else cout << "Capacity is not enough" << endl;
    }
};

class air: public transport{
    public:
        short unsigned int fly_range;
};

class plane: public air{
    public:
        short unsigned int runway_length;

    plane(short unsigned int _capacity, short unsigned int _max_speed, short unsigned int _fly_range, short unsigned int _runway_length){
        capacity = _capacity;
        max_speed = _max_speed;
        fly_range = _fly_range;
        runway_length = _runway_length;
    }

    bool can_land(short unsigned int length){
        if(runway_length <= length) return true;
        else return false;
    }
};

int main(){
    bool a;
    plane plane1(100, 800, 5000, 2000);
    plane1.load_pas(80);
    a = plane1.can_land(1800); // a = false
    return 0;
}