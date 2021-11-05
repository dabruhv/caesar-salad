//Caesar Cipher Implementation
//written by Dr. Mo, 2021
//limitations of this code:
//1) does not work with spaces
//2) only works for messages that are less than 100 characters
//3) will encode non-character symbols in messages
//4) always codes and decodes message (doesn't give user a choice)

#include<iostream>
#include<string>
using namespace std;
int main() {
    //set up variables----------------------------------------------------
    string message;
    char coded[100];
    char decoded[100];
    int key;

    //get user inputs----------------------------------------------------
    cout << "how many times will you shift?" << endl;
    cin >> key;
    
    cout << "enter in a name" << endl;
    cin >> message;



    cout << endl << endl;

    //for each slot in the message array, add the key and store it in the corresponding slot in the coded array
    for (int i = 0; i < message.size(); i++) {

       coded[i]=message[i] + key;
       decoded[i] = message[i];
    }

    //print out the coded array
    cout << "encoded message:" << endl;
    for (int i = 0; i < message.size(); i++) {
        cout << coded[i];
  }
    cout << endl << endl;

    //decode by subtracting the key from each slot in the coded array and storing it into the corresponding slot in the decoded array
    cout << "decoded message:" << endl;
    for (int i = 0; i < message.size(); i++) {
        cout << decoded[i];
    }

        //print out the decoded array
    //THREE LINES REMOVED

    cout << endl << endl;
}
