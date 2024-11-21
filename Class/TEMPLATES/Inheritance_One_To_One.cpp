/*WAP TO CREATE A CLASS STUDENT. GENERIC DATA MEMEBER rollno, DERIVE A CLASS RESULT FROM STUDENT WITH MEMBER MARKS OF 5 SUBJECTS.
PRINT THE ROLL NO ALONG WITH THE SUM OF THE MARKS IN A TEMPLATE*/
template<class T>
class Student{
    public:
        T roll;
        void get(){
            cin>>roll;
            cout<<"The Roll No is: "<<roll<<endl;
        }
};
template <class T, class T1>
class result: public Student<T>{
    public:
    T1 marks[5];
    void get(){
        Student<T>::get();
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void sum(){
        int sum = 0;
        for(int i=0;i<5;i++){
            sum += marks[i];
        }
        cout<<"The Sum is: "<<sum;
    }
};
int main(){
    result <int,int>r;
    r.get();
    r.sum();
}
