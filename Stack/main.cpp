//
//  main.cpp
//  Stack
//
//  Created by Намиг on 05.01.18.
//  Copyright © 2018 Намиг. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include "stack.h"


int main() 
{
    Stack<int> tmp;
    tmp.push(1);
    std::cout << tmp.top() << std::endl;
    tmp.push(2);
    std::cout << tmp.top() << std::endl;

    tmp.push(3);
    std::cout << tmp.top() << std::endl;

    std::cout << tmp.pop() << " " << tmp.pop() << " " << tmp.pop();
    return 0;
}
