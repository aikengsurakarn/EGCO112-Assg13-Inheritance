class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(int=0);
    ~Thai_person();
    void display();
 };

Thai_person::Thai_person(int x){
  cout<<"============="<<endl;
  cout<<"Thai person constructor"<<endl;
  nat_id=x;
}

Thai_person::~Thai_person()
{
  cout<<"============="<<endl;
  cout<<"Thai person destructor"<<endl;
}

void Thai_person::display()
{
  cout<<"Nat ID : "<<nat_id<<endl;
}