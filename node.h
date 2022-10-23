 #pragma once 

 #include<iostream>
 #include<string>

 #include "LinkedList.h"
 #include "driver.h"


  class Node {

 public:
    int roll_number ;
    std::string name ;
    float marks ;
    float percentage ;
    
    Node *next_add;

 };