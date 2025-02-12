#include <iostream>
using namespace std;
class test{
private:
int code;
static int count;
public:
void setcode(){
  code=++count;
}
static void showcount(){
  cout<<count;
}
};
int test :: count;
int main(){
test t1,t2,t3;
t1.setcode();
t2.setcode();
t3.setcode();
test::showcount();
}
