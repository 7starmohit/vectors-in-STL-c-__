#include<iostream>
#include<vector>
using namespace std;
template<class t1>
void display(vector<t1>&ff){
  int i;
  cout<<"the inserted values in vector object are:"<<endl;
  for(i=0;i<ff.size();i++){

    cout<<ff[i]<<"  ";
    //cout<<ff.at(i)<<endl;
  }
  cout<<endl;
}
int main(){
    vector<float>obj3(4,8.9);
 /*vector<int>obj1;
 int element,i,piku;
 for(i=0;i<4;i++){

    cout<<"enter the value for vector object1"<<endl;
    cin>>element;
    obj1.push_back(element);
 }
 vector<float>obj2;

 for(i=0;i<3;i++){
    cout<<"enter the value for vector object2"<<endl;
    cin>>piku;
    obj2.push_back(piku);
 }
 */
 display(obj3);
 //obj1.pop_back();
 //display(obj1);
 //vector<int>::iterator mohit= obj1.begin();
 //obj1.insert(mohit+1,66,566);
 //display(obj1);
 //obj2.pop_back();
 //display(obj2);

 return 0;
}
