#include <iostream>
using namespace std;
        class myarray{
             int totalsize;
             int usedsize;
             int *ptr;
             public:
             myarray(){}
             myarray(int tsize,int usize){
                totalsize=tsize;
                usedsize=usize;
                ptr=new int[totalsize];
                for(int i=0;i<totalsize;i++)
                *(ptr+i)=0;
             }
             void get_array(){
               cout<<"value of array:\n";
               for(int i=0;i<usedsize;i++){
                  cout<<"\t"<<i+1<<"th value:"<<*(ptr+i)<<endl;
               }
             }
             void set_array(){
               cout<<"enter value of array:\n";
               for(int i=0;i<usedsize;i++){
                  cout<<"\tenter "<<i+1<<"th value:";
                  cin>>*(ptr+i);
               }
             }
             void get_totalsize(){
               cout<<"totalsize of array is "<<totalsize<<".\n";
             }
             void get_usedsize(){
               cout<<"usedsize of array is "<<usedsize<<".\n";
             }
             void set_array(int tsize,int usize){
                totalsize=tsize;
                usedsize=usize;
                ptr=new int[totalsize];
                for(int i=0;i<totalsize;i++)
                *(ptr+i)=0;
             }
             void getvalue(int i){
                cout<<"value at index of "<<i<<" is "<<*(ptr+i)<<".\n";

             }
             void setvalue(int i,int num){
               *(ptr+i)=num;  
             }
           void max_array(){
            int Max;
            for(int i=0;i<usedsize-1;i++){
                if(i==0){
                   Max=max(*(ptr+i),*(ptr+1+i));

                }
                else if(Max<*(ptr+1+i)){
                    Max=max(Max,*(ptr+1+i));
                }
                
            } 
            cout<<"maximum value in array is "<<Max<<".\n";
           }
              void min_array(){
            int Min;
            for(int i=0;i<usedsize-1;i++){
                if(i==0){
                   Min=min(*(ptr+i),*(ptr+1+i));

                }
                else if(Min>*(ptr+1+i)){
                  Min=max(Min,*(ptr+1+i));
                }
                
            } 
            cout<<"minimum value in array is "<<Min<<".\n";
           }
           void serch_array(int num){
            int flag=0;
            int i;
            for( i=0;i<usedsize;i++){
               if(*(ptr+i)==num){
                  flag=1;
                  break;
               }
            }
            if(flag==1){
               cout<<num<<" is in array at index of "<< i<<".\n";
            }
            else{
               cout<<num<<" doesn't exits in array.\n";
            }
           }
           void insert_array(int id,int num){
                  for(int i=usedsize+1;i>=id-1;i--){
                     *(ptr+i+1)=*(ptr+i);
                  }
                  *(ptr+id-1)=num;
                  usedsize=usedsize+1;
           }
           void append_array(int num){
            usedsize=usedsize+1;
            *(ptr+usedsize-1)=num;
           }



        };
   
int main() 
{
   myarray a;
   a.set_array(10,6);
   a.set_array();
   a.get_array();
   a.getvalue(3);
   a.setvalue(3,45);
   a.getvalue(3);
   a.max_array();
   a.min_array();
   a.get_usedsize();
   a.serch_array(45);
   a.insert_array(3,67);
   a.get_usedsize();
   a.getvalue(3);
   a.getvalue(4);
   a.append_array(89);
   a.get_usedsize();
   return 0;
}