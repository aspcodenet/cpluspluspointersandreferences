#include <iostream>
#include <string>

class House{
public:
    House(std::string name,char color)
    :name(name),color(color)
    {

    }
    char getColor() const{
        return color;
    }
    void setColor(char newColor) {
        color = newColor;
    }
private:
    char color;    
    std::string name;

};

void Paint(House *house){
    //(*house).setColor('W');
    house->setColor('W');
}

void PaintBad(House house){
    house.setColor('W');
}




void Paint2(House &house){
    //(*house).setColor('W');
    house.setColor('W');
}


void Modify(int *i){
    *i = 123;
}


void ModifyBad(int i){
    i = 123;
}



void Modify2(int &i){
    i = 123;
}


int main(){
    int rr = 12;
    Modify(&rr);
    std::cout  << rr << std::endl;
    // POINTERS = we need them tro be able to modify a variable when calling another function
    // POINTERS - for performance reasons

    // Demystifying pointers
    // POINTER: Just variable containining a MEMORY ADDRESS

    // REFERENCE = alias 
    // syntactic sugar to ease our usage of pointers

    // int i = 12;
    // int j = 13;
    // int &iRef = i;

    // iRef = 111;
    // iRef = j;
    // iRef++;
    // i++;
    //std::cout << i << std::endl;

    // Modify2(i);


    // Modify(&i);
    House myHouse("Stefans house", 'B');
    //PaintBad(myHouse);
    //Paint(&myHouse);
    //Paint2(myHouse);
    std::cout << myHouse.getColor() << std::endl;

    // So what is reference then
    // int i;
    // i=12;
    // //int *pI =(int *) 13;
    // int *pI = &i;
    // //pI++;
    // //pI = pI + 50; // pointer arithmetics
    // *pI = 11;


    // int t = 12;
    // int *pointerT = &t;

    // //t = 13;
    // //pointerT += 50; // pointer arthmetic
    // *pointerT = 13;
    // std::cout << t << std::endl;


    return 0;
}


