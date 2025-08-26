#include <iostream>
using namespace std;
int count;
class A1{
    
    public:
        A1(){
            count=11;
        }
        A1(int a){
            count=a;
        }
        void operator ++(){
            count= ++ count;
            count=count++;
        }
    void display(){
        cout<<"Count after operator is overloaded "<<count<<endl;
    }
};
int main(){
    A1 obj;
    ++obj;
    obj.display();
    
    A1 obj2(15);
    ++obj2;
    obj2.display();
    return 0;
}