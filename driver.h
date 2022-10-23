 #pragma once 

 #include "LinkedList.h"
 #include "node.h"
 #include "Others.h"
 

 


 int menu(int time , int length , int code) {

    loading(time , length , code);

    std::cout << "\n\n 1 . Insert a Record " ;
    std::cout << "\n\n 2 . Search a Record " ;
    std::cout << "\n\n 3 . Count Nodes ";
    std::cout << "\n\n 4 . Update Record ";
    std::cout << "\n\n 5 . Delete Record ";
    std::cout << "\n\n 6 . Show All Record ";
    std::cout << "\n\n 7 . Exit ";

    int choice ;
    std::cout << "\n\n\n Your Choice : ";
    std::cin >> choice ;

    return choice ;
 }




 void executer(int choice , LinkedList obj , int time , int length , int code ) {
     std::string names;

    switch (choice) {
    
    case 1:

    loading(time , length , code);


        system("cls");
        
        


        int roll ;
        float marks ;


         std::cout << "\n\n Enter the Roll number : " ;
          std::cin >> roll;
        
         std::cout << "\n\n Enter marks : ";
         std::cin >> marks ;

         std::cout << "\n\n Enter name : ";
         std::cin >> names ;

        obj.Insert(names , roll , marks);

        break;
    case 2:
        system("cls");

        
    loading(time , length , code);


        obj.Search();

        break;
    case 3:
        system("cls");
    loading(time , length , code);
    

        obj.Count();

        break;
    case 4:
        system("cls");

    loading(time , length , code);
    


        obj.Update();

        break;
    case 5:
        system("cls");
    loading(time , length , code);
        
        
        obj.Delete();

        break;
    case 6:
        system("cls");
        
    loading(time , length , code);

        obj.Show();

        break;
    case 7:
        exit(0);
    
    default:
        std::cout << "\n\n\n Invalid Input ... Try again with a valid input " ;
        
        break;
    }

 }