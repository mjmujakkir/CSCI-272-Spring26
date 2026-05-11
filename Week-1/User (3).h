#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

class Database; 

class User{
protected:

string name;
int id;
double hours;
string role;

public:
    User(string n, int i, double h, string r){
        name = n;
        id = i;
        hours = h;
        role = r;
    }
    

    string getName(){
        return name;
    }
    
    int getId(){
        return id;
    }
    
    double getHours(){
        return hours; 
    }
    
    string getRole(){
        return role;
    }
    
    void setHours(double h){
        hours = h;
    }
   
    bool operator==(int inputId) {
    return id == inputId;
}

    virtual void displayMenu(){
        cout << "User menu" << endl;
    }

    virtual void menu(Database& db){
        cout << "No menu for basic user." << endl;
    }
    
};
#endif
