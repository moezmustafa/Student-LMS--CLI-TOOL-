 #include<iostream>
 #include<conio.h>
 #include<string>

 #include "driver.h"
 #include "LinkedList.h"
 #include "node.h"
 #include "Others.h"



 int main() {
    LinkedList obj ;

    int time = 3;
    int length = 70 ; 
    int code = 1 ; 

    Top_Label_Position:

    int choice  = menu(time ,  length , code) ;

    executer(choice , obj , time ,  length ,  code);

     getch();
     system("cls");
    goto Top_Label_Position; 


    

 }