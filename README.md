# Cpp_interview_challenges

I'm just doing some programming challenges in C++ and explaining what to solve and how I solved the problem. I'm not done but don't have premium so can't keep this repo private. Don't judge my code this is only trying challenges and not optimizing them.


Fibonacci:
Infinite number of integers where every number after the first two is the sum of the two preceding ones. So the beginning of the Fibonacci series is 0 1 1 2 3 5 8 13 21 34 55 ...
Your job is to get the term of the number in the Fibonacci series as input and then display all the correct Fibonacci numbers in order until you get the term you where looking for. Awnser is in fibonacci.cpp

NonRecurringCharacter:
Take the string and return the first non recurring char of the string. 
Example input:	output:
ABCA		B
BCCABAD		D
AABB		null 
You could bruteforce it so compare everything but that isn't efficient. We are going to go through string and store every char in an array with an index. Then compare the chars and output the first one that doesn't match.

