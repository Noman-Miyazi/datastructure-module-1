#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int roll;
    char section;
};

int main(){
    int n;
    cin>>n;
    //cin.ignore();
    //student a[n];
    student* a=new student[n];

    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].section;
        //cin.ignore();
    }
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].section<<endl;
    }

return 0;
}
//mini mize
#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int roll;
    int mark;
};

int main(){
    int n;
    cin>>n;
    student a[n];
    //student* a=new student[n];

    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    student mn;
    mn.mark=INT_MIN;
    //int mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i].mark > mn.mark){
            mn= a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.mark<<endl;

return 0;
}
//sort by swap
#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int roll;
    int mark;
};

int main(){
    int n;
    cin>>n;
    student a[n];
    //student* a=new student[n];

    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].mark < a[j].mark){
                swap(a[i],a[j]);
            }
            if(a[i].mark == a[j].mark){
                if(a[i].roll>a[j].roll){
                    swap(a[i],a[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    }

return 0;
}
//sort by bool
#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int roll;
    int mark;
};
bool cmp(student a,student b){
    if(a.mark > b.mark){
        return true;
    }
    else if(a.mark < b.mark){
        return false;
    }
    else{
        if(a.roll < b.roll){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int n;
    cin>>n;
    student a[n];

    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    }

return 0;
}

//
#include<bits/stdc++.h>

using namespace std;

class freq
{
    public:
    string value;
    int count;
};

int main(){
    string s;
    cin>>s;
    freq f[26];
    for(int i=0;i<26;i++){
        f[i].value = char(i+'a');
        f[i].count = 0;
    }
    for(int i=0;i<26;i++){
        cout<<f[i].value<<" "<<f[i].count<<endl;
    }

return 0;
}