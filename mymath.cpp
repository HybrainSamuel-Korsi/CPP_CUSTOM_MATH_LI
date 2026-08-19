


#include <iostream>
#include <mymath.h>

using namespace std;



// ============== FUNCTION DECLARATION ================ 


double add(double a, double b );
double subtract(double a, double b );
double multiply(double a, double b );
double divide(double a, double b );




// ================ FUNCTION IMPLEMENTATION==============

double add( double a, double b){

    return (a+ b);

}


double subtract( double a, double b){

    return (a- b);

}

double multiply( double a, double b){

    return (a* b);

}
double divide( double a, double b){

    if( a==0){
        std::cout<<"Cannot divide by Zero"<<endl;
        return 0;

    }else{
         return (a/ b);

    }

   

}

