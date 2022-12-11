#include<iostream>
#include "Linked List.hpp"
#include "Stack.hpp"
#include "Employees.hpp"
#include "Nodes.hpp"
using namespace std;
class string_search{
    public:
    string Search (doubllylinklist &ob,string a)
    {
        Stack s;
        string name;
        NodeList *curr=ob.head;
        string cmp;
        int choice=0;
       while(curr!=NULL)
       {
            
            name=curr->obj.getName();
            string temp;
            for(int i=0;i<name.length();i++)
            {
                
                if(name[i]!=' ')
                {
                temp+=name[i];
                }
                if(name[i]== ' ')
                {
                    s.Push(temp);
                    //cout<<temp<<";";
                    //cout<<endl;
                     temp="\0";

                }
            }
            s.Push(temp);
            while(!s.isEmpty())
            {
            cmp=s.pop();
            //cout<<cmp<<";";
            if(cmp==a)
            {
                cout<<"\tDid You Mean: "<<name<<endl;
                cout<<"\tPress [1] for Yes"<<endl;
                cout<<"\tPress [0] to Continue"<<endl;
                cin>>choice;
                if(choice==1)
                {
                    // curr->obj.Display();
                    return curr->obj.getName();
                }

            }
            }
            
            curr=curr->next;
            
    }
 
     if(choice!=1)
    {
        cout<<"\tSorry! We Couldn't Find the Data you were Searching For"<<endl;
        return " ";
    }
}
};
// int main()
// {
//     doubllylinklist ob;
//     Employee obj;
//     Employee obj2;
//     Employee ob3;
//     ob3.setName("Muhmmad Shayan");
//     obj2.setName("Shayan Shoaib");
//     obj.setName("Muhammad Shayan Khan");
//     ob.insert(ob3);
//     ob.insert(obj2);
//     ob.insert(obj);
//     string_search s;
//     s.Search(ob,"Shayan");
// }
