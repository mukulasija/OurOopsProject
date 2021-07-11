#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "Human.h"
#include "Family.h"

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using example::Human;
using example::Family;
using std::endl;
namespace example
{
    Family* Family::f1=0;
    Family* Family::f2=0; 
    Family::Family()
    {
        this->assigned=0;
    }
//    int Family::showfamilymembersforslotbooking()
//     {
//         int no=0;
//         if(f1->isassigned())
//         {
//             no++;
//         cout<<"2. ";f1->bookforname();
//         }
//         if(f2->isassigned())
//         {
//             no++;
//         cout<<"3. ";f2->bookforname();
//         }
//         return no;
//     }
//     int Family::showfamilymembersforslotchecking()
//     {
//         int no=0;
//         if(f1->isassigned())
//         {
//             no++;
//             cout<<"2. Check for "<<f1->fname<<endl;
//         }
//         if(f2->isassigned())
//         {
//             no++;
//             cout<<"3. Check for "<<f2->fname<<endl;
//         }
//         return no;
//     }
    void Family::bookforname()
    {
        cout<<"Book for "<<this->fname<<endl;
    }
    void Family::declare()
    {
        cout<<"First Name: ";
        cin>>this->fname;
        cout<<"Last Name: ";
        cin>>this->lname;
        cout<<"Aadhar Number: ";
        cin>>this->aadhaar;
        cout<<"City: ";
        cin>>this->city;
        cout<<"State: ";
        cin>>this->state;
    }
    bool Family::isassigned()
    {
        return assigned;
    }
    void Family::assign()
    {
        this->assigned=1;
    }
}
