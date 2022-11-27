#include<iostream>
using namespace std;
 
class demo
{
    private:
    
        int var;
         
    public:
        
        void set_var(int temp)
        {
            var =temp;
        }
         
        int get_var()
        {
            return var;
        }
};
 
int main() 
{

    demo obj;
    obj.set_var(100);
    //using get_var function to get/access the value of private member var
    cout<<obj.get_var();
   
    return 0;
}
