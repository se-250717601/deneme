#include "nth_prime.h"
#include <stdbool.h>
#include <math.h>
uint32_t nth(uint32_t n){
    uint32_t count=1;
    uint32_t candidate=1;

    if (n==0){return 0;}
    if (n==1){return 2;}
      
    while(count<n){
        candidate+=2;
        bool is_prime = true;
        for(uint32_t d=3;d*d<=candidate;d+=2){
            if(candidate % d == 0){
                is_prime= false;
                break;
            }
    
        }
        if (is_prime){count++;}
    
        }
    return candidate;
}
