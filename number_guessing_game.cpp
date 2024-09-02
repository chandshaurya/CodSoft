#include<iostream>
#include<time.h>
using namespace std;
int main (){
    int number;
    int guess;
    

    srand(time(NULL));
    number = (rand()%1000) +1;      // number between 1-1000

    


    do{
        cout<< "Enter a guess no :" ;
        cin>>guess;
        

        if(guess > number){
            cout<< "Guess is too high\n";
        }
        else if(guess<number){
            cout<< "Guess is too low\n";
        }
        else{
            cout <<"Guess the CORRECT NUMBER";
        }


    }while(guess != number);

    


}
