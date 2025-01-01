#include <iostream>
using namespace std;

class Task
{
public:
    string s;
    Task *next;
    bool mark;
    int num;

    Task(string temp, int n)
    {
        s = temp;
        next = nullptr;
        mark = false;
        num = n;
    }
};

void add(Task* &ans,string str,int num){
   Task *temp = new Task(str, num);
   Task* p=ans;
   
   if(ans==NULL){
    ans=temp;
    p=ans;
   }
   else{
    while(p->next!=nullptr){
    p=p->next;
   }
     p->next=temp;
     p=p->next;
   }
}


void remove(Task* & ans,int c){
    if(ans==nullptr){
        cout<<"No task entered yet."<<endl;
        return;
    }
      Task* r=ans;
     int cnt=0;
     Task* q=nullptr;
     while(r->num!=c && r!=NULL){
       cnt++;
       q=r;
       r=r->next;
     }
     if(r==NULL){
        cout<<"Entered task number not found.Please try again"<<endl;
        return;
     }
     if(r==ans){
        ans=ans->next;
        delete(r);
     }
     else{
        q->next=r->next;
        r->next=NULL;
        delete(r);
     }
}

void display(Task* ans){
Task* p=ans;
if(p==NULL){
    cout<<"You havn't entered any task yet."<<endl;
    return;
}
while(p!=NULL){
    cout<<p->num<<" "<<"Task:"<<p->s<<endl;
    if(p->mark){
        cout<<"Task Status:Completed"<<endl;
    }
    else{
        cout<<"Task Status: Incomplete"<<endl;
    }
    cout<<endl;
   p=p->next;
}

}

void update(Task* &ans,int c){
    if(ans==NULL){
        cout<<"No Task present yet"<<endl;
        return;
    }
     Task* r=ans;
     while(r!=nullptr && r->num!=c){
        r=r->next;
     }
     if(r==nullptr){
        cout<<"Entered task number not found.Please Try again"<<endl;
        return;
     }
     else{
        r->mark=true;
     }
}
int main()
{
    Task* ans=NULL;

    int choice;
    cout << "Add Task=1\nDelete Task=2\nShow Tasks=3\nUpdate Task Status=\n";
    int num = 0;
    while (true)
    {
        cout<<"Enter command:"<<endl;
        cin >> choice;
        switch(choice)
        {
        case 1:{
            num++;
            cout<<"Enter task description:"<<endl;
            cin.ignore();
            string str;
            getline(cin, str);
            add(ans,str,num);
            break;
        }
            
        case 2:{
            int n;
        cout<<"Enter task number to delete"<<endl;
        cin>>n;
            remove(ans,n);
            break;
        }
        
        case 3:
        {
            display(ans);
        break;
        }
        
        case 4:{
            cout<<"Enter task number that are completed"<<endl;
        int c;
        cin>>c;
        update(ans,c); 
        break;
        }
        default:
        cout<<"You entered Wrong command. Please try again"<<endl;   
        break;
        }
    }
}