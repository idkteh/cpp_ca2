//
// Created by idate on 27/04/2024.
//

#include "Board.h"
#include <fstream>
#include <iostream>
#include "Crawler.h"
#include "Hopper.h"

int stringToInt(std::string str) {
    // https://cplusplus.com/reference/string/stoi/
    return std::stoi(str);     //if put in string, it turns it to number "15" => 15
}
Board::Board() {
    ifstream fin("bugs.txt");
    if(fin){           // if file is open
        string bug;
        string temp;
        int id;
        int x;
        int y;
        int direction;
        int size;
        int hop_lenght;
        while (!fin.eof()){
            getline(fin,bug);   // reads string from file
            if(bug.length() > 0) {
                string bugType = bug.substr(0, 2); // storing the type
                bug = bug.substr(2); // cutting off the type

                temp = bug.substr(0, bug.find(";")); // getting next value = id
                id = stringToInt(temp);  //converting and storing id


                bug = bug.substr(bug.find(";")+1, bug.length()); //getting rid of id
                temp = bug.substr(0, bug.find(";"));
                x = stringToInt(temp);

                bug = bug.substr(bug.find(";")+1, bug.length() - 1); //getting rid of x
                temp = bug.substr(0, bug.find(";"));
                y = stringToInt(temp);

                bug = bug.substr(bug.find(";")+1, bug.length() - 1); //getting rid of y
                temp = bug.substr(0, bug.find(";"));
                direction = stringToInt(temp);

                bug = bug.substr(bug.find(";")+1, bug.length() - 1); //getting rid of direction
                temp = bug.substr(0, bug.find(";"));
                size = stringToInt(temp);

                if(bugType=="C;"){
                    bugs.push_back(new Crawler(id,x,y,direction,size));
                }else if(bugType == "H;"){
                    bug = bug.substr(bug.find(";")+1, bug.length() - 1); //getting rid of direction
                    temp = bug.substr(0, bug.length());
                    hop_lenght = stringToInt(temp);
                    bugs.push_back(new Hopper(id,x,y,direction,size,hop_lenght));
                }
            }
        }
        fin.close();
    }else{
        cout << "Error opening file" << endl;
    }
}

void Board::displayAllBugs() {
    vector<Bug*>::iterator it;
    for (it = bugs.begin(); it != bugs.end(); it++){
        cout << (*it)->toString() << endl;
    }

}

void Board::findBug(int id){
    vector<Bug*>::iterator it;
    for (it = bugs.begin(); it != bugs.end(); it++){
        if((*it)->getId()==id){
            cout << (*it)->toString() << endl; //dereferences the iterator to get the id of the object it points at
            return;   //ends method early
        }
    }
    cout<<"bug "+std::to_string(id)+" not found"<<endl;
}

void Board::tap(){
    vector<Bug*>::iterator it;
    for (it = bugs.begin(); it != bugs.end(); it++){
        (*it)->move();
       // cout << (*it)->toString() << endl;
    }
}