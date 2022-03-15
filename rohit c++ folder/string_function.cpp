#include <iostream>
using namespace std;

int main(){
    string str;
    string s1,s2="roh";
    string s3 = "good";
    string s4 = "goodmorning";

    s1 = "roh";
    //s1.append(s2);     //Appending
    cout<<s1 <<endl;
    cout<<s2 <<endl;
    cout<<s1+s2<<endl;   //To add two string
    cout<<s1[2]<<endl;   //To access the cherecter of the string

    if (s1.compare(s2)==0)
    cout<<"string are equal"<<endl;
    cout<<s1.compare(s2)<<endl;

    cout<<s3<<endl;
    s3.clear();
    cout<<s3<<endl;

    if (s3.empty())
    cout<<"string is empty"<<endl;

    s4.erase(2,4);    //erase(from which index, how much cheracter)
    cout<<s4<<endl;
    
    cout<<s4.find("n")<<endl;

    s4.insert(2 , "odmo");    //insert(from which index, what to insert)
    cout<<s4<<endl;
    cout<<s1.length()<<endl;
    cout<<s2.length()<<endl;
    cout<<s3.length()<<endl;
    cout<<s4.length()<<endl;

    for (int i=0; i<s4.length(); i++)
    cout<<s4[i]<<endl;

    string s5 = s4.substr(3, 4);
    cout<<s5<<endl;
    cout<<s4<<endl;
    return 0;
}