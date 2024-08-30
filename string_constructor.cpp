#include<bits/stdc++.h>

using namespace std;

int main(){
    //string s="Hello World";
    //string s("hello world",5);
    //string a="Hello World";
    //string s(a,6);
    //string s(5,'\0');
    //string s;
    //getline(cin,s);
    //sort(s.begin(),s.end());
    //cout<<s<<endl;

    //string s;
    //getline(cin,s);
    //for(int i=0;i<s.size();i++){
    //    cout<<s[i];
    //    cout<<endl;
    //}
    //for(char c:s){
    //    cout<<c<<endl;
    //}
    //string s;
    //getline(cin,s);
    //stringstream ss(s);
    //string word;
    //while(ss >> word){
    //    cout<<word<<endl;
    //}

//    void fun(stringstream &ss)
//{
//    string word;
//    if(ss >> word){
//        fun(ss);
//        cout<<word<<endl;
//    }
//}

//int main(){
//   string s;
//   getline(cin,s);
//    stringstream ss(s);
//    fun(ss);



return 0;
}
#include<bits/stdc++.h>

using namespace std;

class person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    person(string name,int age,int marks1,int marks2)
    {
        this->name=name;
        this->age=age;
        this->marks1=marks1;
        this->marks2=marks2;
    }
    void fun()
    {
    cout<<name<<" "<<age<<endl;
    }
    int total()
    {
        return marks1+marks2;
    }
};

int main(){
    person noman("MD NOMAN ",19,85,95);
    //cout<<noman.total()<<endl;
    cout<<noman.name<<" "<<noman.age<<endl;


return 0;
}
#include<bits/stdc++.h>

using namespace std;

class person
{
public:
    string name;
    int age;
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};

int main(){
    person* noman=new person("MD_NOMAN",19);
    person* nadim=new person("MD_NADIM",18);

    //noman=nadim;
    //noman->name=nadim->name;
    //noman->age=nadim->age;
    *noman=*nadim;
    delete nadim;

    cout<<noman->name<<" "<<noman->age<<endl;

return 0;
}
#include<bits/stdc++.h>

using namespace std;

namespace noman
{
    int age=19;
    void fun()
    {
        cout<<"noman namespace"<<endl;
    }
}
namespace nadim
{
    int age1=18;
    void fun1()
    {
        cout<<"nadim namespace"<<endl;
    }
}

int main(){
    cout<<noman::age<<endl;
    cout<<nadim::age1<<endl;
    fun();
    sakib::fun1();


return 0;
}
