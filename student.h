
#pragma once
#include<iostream>

namespace student2549013
{
 class student
 { int id{};
    int score{};
    char grade{};
    

    void testid(){ 
        if(id<1000000||id>9999999)
            std::exit(1);
    }
    void testscore(){
        if(score<0||score>100)
            std::exit(1);
    }
    void testgrade(){
        if('A'>grade||'F'<grade)
            std::exit(1);
    }
        
   public:
       void input(){
              std::cout<<"enter id"<<std::endl;
            std::cin>>id;testid();
            std::cout<<"enter score"<<std::endl;
            std::cin>>score;testscore();
            std::cout<<"enter grade"<<std::endl;
            std::cin>>grade;testgrade();
       }

       
       void setid(int newid){id=newid;}
       void setscore(int newscore){score=newscore;}
       void setgrade(char newgrade ){grade=newgrade;}
       void print()const{std::cout<<id<<" "<<score<<" "<<grade<<std::endl;}
        int getscore(){ return score;}
        int getid( ){return id;}
        char getgrade(){return grade;}
        
       

 };

}