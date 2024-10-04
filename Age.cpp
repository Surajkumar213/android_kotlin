#include <iostream>
using namespace std;

int main() {
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age < 18) {
        cout<<"Not eligibe for voting";
    } else {
        cout<<"Eligible for Voting";
    }


    return 0;
}