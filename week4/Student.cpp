#include<iostream>
#include<string>

using namespace std;
struct student{
   int mssv;
   string hoten;
   student* next;

};

struct hashtable{
   static const int size = 100;

   int hash( int mssv ) {
      return mssv%size;
   }

   student* listStudent[size];

   hashtable() {
      for( int i = 0; i < size; i++) {
         listStudent[i] = new student;
         listStudent[i]->mssv = 0;
         listStudent[i]->hoten = "";
         listStudent[i]->next = NULL;
      }
   }
   void put( int mssv, string hoten) {
      int k = hash(mssv);
      if(listStudent[k]->mssv = 0){
         listStudent[k]->mssv = mssv;
         listStudent[k]->hoten = hoten;
      }else {
         student* temp = listStudent[k];
         student* newStudent = new student;
         newStudent->hoten = hoten;
         newStudent->mssv = mssv;
         newStudent->next = NULL;
         while(temp->next != NULL){
            temp = temp->next;
         }
         temp->next = newStudent;
      }
   }

   string get( int mssv) {
      int k = hash(mssv);
      bool found;
      student* temp = listStudent[k];
      while(temp->next != NULL){
         if( temp->next->mssv == mssv){
            found = true;
         }
         temp = temp->next;
      }
      if(found){
         return temp->hoten;
      }else return "NO";
   }

   string remove( int mssv) {
     {
    int idx = hash(mssv);
    student* temp = listStudent[idx];
    student* prev = temp;
    ///deletion at head
    if(temp->mssv == mssv)
    {
        listStudent[idx] = temp->next;
        temp->next = NULL;
        delete temp;
    }
    ///deletion in middle
    while(temp!=NULL)
    {
        if(temp->mssv == mssv)
        {
            prev->next = temp->next;
            temp->next = NULL;
            delete temp;
        }
        ///deletion at end
        if(temp->next==NULL && temp->mssv == mssv)
        {
           prev->next = NULL;
           delete temp;
        }
        prev = temp;
        temp = temp->next;
    
    }
    return prev->hoten;
}

   }
};


int main() {
   hashtable h;
   //hashtable();
   h.put(1,"Bui Minh Son");
   h.put(2,"Can Duy Cat");
   cout<<h.get(3)<<endl;
   cout<<h.get(2)<<endl;
   cout<<h.remove(2)<<endl;
   cout<<h.get(2)<<endl;
}