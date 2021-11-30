/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brandon Lopez
 */
#include <iostream>

using namespace std;

//basic functions to be completed
void add(const int a, const int b){
  cout<<a+b<<endl;
}

void subtract(const int a, const int b){
  cout<<a-b<<endl;
}

void multiply(const int a, const int b){
  cout<<a*b<<endl;
}

void divide(const int a, const int b){
  cout<<a/b<<endl;
}

//constants that'll be used
const int a = 8;
const int b = 4;


int main() {
  add(a, b);
  subtract(a, b);
  multiply(a, b);
  divide(a, b);
}

//We used constants for each of these functions and got the expected results

//A reason for using these would be that you know you don't want these constants to change and you are only going to be working with these constans as your data

//people don't typically use constants like this because a lot of the programs that people use should work with different sets of data and people actually go through effort of making sure it can handle these variations in data. Constants would hold the code back and make it less adaptable to teh situation.