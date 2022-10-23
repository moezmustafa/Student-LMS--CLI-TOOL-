 #pragma once
 #include<iostream>
 #include<string>

 
 #include "driver.h"
 #include "node.h"

 

    Node *pointer = NULL; 


 class LinkedList {

    public: 

        


        void Insert(std::string name , int number , float marks  )
        {
            
            Node *new_node = new Node ;

            new_node->roll_number = number ; 
            new_node->marks = marks ;
            new_node->name = name ;
            new_node->percentage = marks/100*100 ;

            new_node->next_add = NULL ;

            if(pointer == NULL ) {
                
                pointer = new_node ;
            }
            else {
                Node *ptr = pointer;

                while (ptr->next_add != NULL) {
                    
                    ptr = ptr->next_add ;
                }

                ptr->next_add = new_node ;
            }

            std::cout << "\n\n\n New Node Inserted ... " ;

        }


        void AvailaleData()
        {
                std::cout << "Available Data : \n\n";

                int number = 1;

             Node *ptr = pointer ;
                while(ptr != NULL){

                        std::cout << std::endl;
                        
                        std::cout << number << "  Name :" << ptr->name << "  Roll : " << ptr->roll_number ;

                    
                    ptr = ptr->next_add;
                    number++;

                }
        }



       void Search()
        {

            if(pointer == NULL){
                std::cout << "\n\n\n The List is empty ... ";
            }
            else {

                int roll_number_to_find ;
                int found = 0 ;


               AvailaleData();

                std::cout << "\n\nEnter the Roll Number to find : ";
                std::cin >> roll_number_to_find;

                Node *ptr = pointer ;
                while(ptr != NULL){

                    if(roll_number_to_find == ptr->roll_number){
                       
                        std::cout << "\n\n Roll No. : " << ptr->roll_number ;
                         std::cout << "\n\n Name : " << ptr->name ;
                          std::cout << "\n\n Marks : " << ptr->marks;
                           std::cout << "\n\n Percentage % : " << ptr->percentage ;

                           found++;

                    }
                    
                    ptr = ptr->next_add;

                }

                if(found == 0){
                     std::cout << "\n\n Search Roll NO. " << roll_number_to_find << "Not Found " ;  
                }


            }
        }



       void Count()
        { 

                if(pointer == NULL) {
                     std::cout << "\n\n Linked List is Empty ... ";
                }
                else {
                    int c = 0 ;
                    Node *ptr = new Node;
                    ptr = pointer ;
                    while(ptr != NULL){
                        c++ ;
                        ptr = ptr->next_add;
                    }

                    std::cout << "\n\n Total Number of Nodes : " << c ;
                }
        }



        void Delete ( ) 
        
        {


            if(pointer == NULL){
                std::cout << "\n\n\n The List is empty ... ";
            }
            else {

                int roll_number_to_find ;
                int found = 0 ;

               AvailaleData();

                std::cout << "\n\nEnter the Roll Number to Delete : ";
                std::cin >> roll_number_to_find;

               if (roll_number_to_find == pointer->roll_number){

                    Node *ptr = pointer ;
                    pointer = pointer->next_add ;
                    std::cout << "\n\n Record of " << roll_number_to_find <<  " is Deleted ... ";
                    found++;
                    delete ptr;

               }

               else {

                    Node *pre = pointer ;
                    Node *ptr = pointer->next_add;

                    while(ptr != NULL) {

                        if (roll_number_to_find = ptr->roll_number)
                        {
                            pre->next_add = ptr->next_add ;

                            found ++ ;
                              
                            std::cout << "\n\n Record of " << roll_number_to_find <<  " is Deleted ... ";

                            delete ptr; 

                            break ;


                        }

                        pre = ptr ;
                        ptr = ptr->next_add;

                    }


               }

               if(found == 0)
               {
                std::cout << "\n\n Record of " << roll_number_to_find << "not found ... ";
               }


            }

        }

        
        void Update( )
            
        {

            if(pointer == NULL){
                std::cout << "\n\n\n The List is empty ... ";
            }
            else {

                int roll_number_to_find ;
                int found = 0 ;

                std::string names ; 
                int  roll ;
                float marks;

               AvailaleData();

                std::cout << "\n\nEnter the Roll Number to update : ";
                std::cin >> roll_number_to_find;

                Node *ptr = pointer ;
                while(ptr != NULL){

                    if(roll_number_to_find == ptr->roll_number){

                        
                        std::cout << "\n\n Enter Updated Roll number : " ;
                        std::cin >> roll;
                        
                        std::cout << "\n\n Enter Updated marks : ";
                        std::cin >> marks ;

                        std::cout << "\n\n Enter Updated name : ";
                        std::cin >> names ;
                       
                        ptr->roll_number = roll;
                        ptr->name = names ;
                        ptr->marks = marks;
                        ptr->percentage = marks/100*100;

                        std::cout << "\n\n\n Record is Updated ... ";
                        found++;
                    }
                    ptr = ptr->next_add;

                }

                if(found == 0){
                     std::cout << "\n\n Search Roll NO. " << roll_number_to_find << "Not Found " ;  
                }


            }
        }




          void Show()
        {

            if(pointer == NULL){
                std::cout << "\n\n\n The List is empty ... ";
            }
            else {


                Node *ptr = pointer ;
                while(ptr != NULL){

                    std::cout << std::endl;
                    std::cout << std::endl;
           
                       
                        std::cout << "\n\n Roll No. : " << ptr->roll_number ;
                         std::cout << "\n\n Name : " << ptr->name ;
                          std::cout << "\n\n Marks : " << ptr->marks;
                           std::cout << "\n\n Percentage % : " << ptr->percentage ;

                    
                    ptr = ptr->next_add;

                }

               

            }
        }


    };
 
