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

int main(){
    string message, key="key";
    char matrix [26][26];
    cout << "Give message: ";
    cin >> message;
    char crypted[message.length()];
    for (int i=0; i<26; i++){
        for (int j=0; j<26; j++){
            matrix[i][j]='a'+(i+j>25?i+j-26:i+j);
        }
    };
    int j = 0;
    for (int i=0; i<message.length(); i++){
        if(j>=key.length()){
            j=0;
        }
        crypted[i]=matrix[(int)message[i]-96][(int)key[j]-96];
        j++;
    }
    printf(crypted);
    cout<<endl;
    return 0;
}
