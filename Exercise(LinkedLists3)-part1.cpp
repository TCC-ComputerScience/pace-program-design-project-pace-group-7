//



#include <iostream>

using namespace std;


struct ContactInfo
{
    string LastName;
    string FirstName;
    int PhoNum;
    ContactInfo *next;
};


//Open contacts.dat, read in firstname, lastname, and phone number, loop until eof
//pre:
//post:
void InitList();
    //ifstream &inData

// Writes the data from a ContactInfo struct out to a given file
// Pre: File dataOut has been opened
//      ContactInfo contains valid data
// Post: The fields of contact are written to file dataOut, appropriately labeled.
void ContactOut(/* INOUT */ ofstream &outData, /* IN */ ContactInfo *contact);

// Prints out all elements in the list
// Pre: currPtr must point to a valid list, or nullptr
// Post: Print all elements in list, if any
void PrintList(ContactInfo *currPtr);

//Lines for user adding last name, first name, and phone number
//pre:
//post:
void ContactInfo* EnterInfo(/* InOut */ ContactInfo *&headPtr/currPtr);

//Finding a string to delete
//pre:  listPtr set to a valid list , or nullptr
//      delValue set to the value of a node to be deleted from the list
//post: list ptr is updated with the first node with delValue, if it exists, deleted from the list
void DeleteNode(ContactInfo *&listPtr, int delValue);
    //string ContactInfo->lastName


int main()
{

}















