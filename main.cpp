

#include <iostream>
#include  <mymath.h>



int main(){

    
// ==================== WELCOME MY MATH LIBRARAY===============
double x, y;
int choice;


std::cout<<"Enter two (2) numbers: \n";
std::cin>>x>>y;


std::cout<<"Choose an operation \n";
std::cout<<"1. Addition \n";
std::cout<<"2. Subtraction \n";
std::cout<<"3. Multiplication \n";
std::cout<<"4. Division \n";
std::cin>>choice;


switch(choice){
    case 1:
    std::cout<<"Result: "<<add(x,y);
    break;

    case 2:
    std::cout<<"Result: "<<subtract(x,y);
    break;

    case 3:
    std::cout<<"Result: " <<multiply(x,y);
    break;

    case 4:
    std::cout<<"Result: "<< divide(x,y);
    break;

    default:
    std::cout<<"Invalid choice \n";
}


return 0;

}

