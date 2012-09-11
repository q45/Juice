//
//  main.cpp
//  characters
//
//  Created by Quintin Smith on 9/11/12.
//  Copyright (c) 2012 Quintin Smith. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    const unsigned int MAX = 20;
    char ch = '7';
    int add;
    
    char cha[MAX];
    unsigned int total;
   
    cout << ch - 48 << endl;
    
    for(int i=0; i<10; i++)
    {
        char one = '1';
        cha[i] = (i + 48);
        total += cha[i];
        cout << cha[i] << endl;
      
    }
    cout << total << endl;
    
    add = cha[0] + cha[1];
    cout << cha[1] - 48 + cha[1] - 48 << endl;
    
    
    
    
    
    
    
    
    
    return 0;
}

