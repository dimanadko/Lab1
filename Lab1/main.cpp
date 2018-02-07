//
//  main.cpp
//  Lab1
//
//  Created by Dima on 07.02.18.
//  Copyright © 2018 Dima. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int getIndexOfElement(char arr[96], char needed ) {
    for (int i = 0; i < 96; i++) {
        if (needed<arr[i]) {
            return i;
        };
    }
    return -1;
};

string encrypt (string message, string key, char matrix[96][96])
{
    int j = 0;
    char crypted[message.length()];
    for (int i=0; i<message.length(); i++){
        if(j>=key.length())
            j=0;
        crypted[i]=matrix[(int)message[i]-31][(int)key[j]-31];
        j++;
        cout<<crypted[i];
    }
    cout<<endl;
    return crypted;
}

//does not work
string decrypt (string crypted, string key, char matrix[96][96])
{
    int j = 0;
    char decrypted[crypted.length()];
    for (int i=0; i<crypted.length(); i++){
        if(j>=key.length())
            j=0;
        decrypted[i]=matrix[(int)crypted[i]-31][(int)key[j]-31];
        j++;
        cout<<decrypted[i];
    }
    cout<<endl;
    return decrypted;
}


int main(){
    string message, key="abc";
    char matrix [96][96];
    cout << "Give message: ";
    cin >> message;
    for (int i=0; i<96; i++){
        for (int j=0; j<96; j++){
            matrix[i][j]=' '+((i+j)%96);
            cout<<matrix[i][j];
        }
        cout<<endl;
    };
    string crypted = encrypt(message, key, matrix);
    return 0;
}
