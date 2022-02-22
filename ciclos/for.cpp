#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int numbers[]= {100, 8, 3, 4, 11};
    
    int numberArrSize= sizeof (numbers)/ sizeof(numbers[0]);
    
    
    for (int i=0 ; i<numberArrSize ; i++){
        
        cout<<"en la posicion "<<i<<" esta el valor: "<< numbers[i] <<endl;
    } 
return 0;
}