import math
import os
import random
import re
import sys

def alternatingCharacters(s):
    count = 0
    
    for i in range(1,len(s)):
        if s[i] == s[i-1]:
            count = count + 1
        
    return count        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = alternatingCharacters(s)

        fptr.write(str(result) + '\n')

    fptr.close()
