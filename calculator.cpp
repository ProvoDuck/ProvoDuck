#include <iostream>
using namespace std;

/* A function that makes the text "Onia". */
void onia(){
    cout <<" _____     _     "<< endl;
    cout <<"|     |___|_|___ "<< endl;
    cout <<"|  |  |   | | . |"<< endl;
    cout <<"|_____|_|_|_|___|"<< endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
}


int main() {

    
    /* A function called "Onia". */
    onia();
    /* Operation savings surgery in variable.*/
    int surgery;
    
    cout<<"[0] Exit [X]"<<endl;
    cout<<"[1] Addition [+]"<<endl;
    cout<<"[2] Subtraction [-]"<<endl;
    cout<<"[3] Multiplication [*]"<<endl;
    cout<<"[4] Division [/]"<<endl;
    cout<<"choose Surgery:"<<endl;
    
    cin>>surgery;
   

    if(surgery == 0){
        cout<<"The program was shut down successfully"<<endl;
    }else{
        /* Operation savings numbers in variable.*/
        int num1;
        int num2;
        
        cout<<"choose Number one:"<<endl;
        cin>>num1;
        cout<<"choose Number two:"<<endl;
        cin>>num2;
        cout<<"Result: ";
        /* Addition */
        if(surgery == 1){
            cout<< num1 + num2<<endl;
        }
        /* Subtraction */
        if(surgery == 2){
            cout<< num1 - num2<<endl;
        }
        /* Multiplication */

        if(surgery == 3){
            cout<< num1 * num2<<endl;
        }
        /* Division */
         if(surgery == 4){
            cout<< num1 / num2<<endl;
        }
        
        
    }

    return 0;
}