#include<iostream>
#include<List>
#include<iterator>
using namespace std;

int main(){
list<int>ll;

ll.push_front(3);
ll.push_front(2);
ll.push_front(1);

ll.push_back(4);
ll.push_back(5);
ll.push_back(6);

list<int>::iterator itr;

for ( itr =ll.begin(); itr != ll.end(); itr++)
{
    cout<<(*itr)<<"->";
}
cout<<endl;
cout<<ll.size()<<endl;
cout<<ll.front()<<endl;
cout<<ll.back()<<endl;



    return 0;
}