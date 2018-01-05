//
//  stack.h
//  Stack
//
//  Created by Намиг on 05.01.18.
//  Copyright © 2018 Намиг. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include <iostream>



template <typename type> class Stack
{
    private:
        type* elements = (type *) malloc(1 * sizeof(type));
        size_t stackSize = 0;
        size_t arraySize = 1;
        
    public:
        size_t size()
        {
            return stackSize;
        }
        
        void push(type addedElement)
        {
            stackSize++;
            if (stackSize < arraySize)
            {
                elements[stackSize] = addedElement;
            }
            else
            {
                arraySize++;
                elements = (type *) realloc (elements, arraySize);
                elements[stackSize] = addedElement;
            }
        }
        
        bool empty()
        {
            return stackSize == 0;
        }
                
        type top()
        {
            return elements[stackSize];
        }
        
        
        type pop()
        {
            type top_value = top();
            if(empty()) 
            {
                return -1;
            }
            else
            {
                stackSize--;
                return top_value;
            }
            
        }
        
};
