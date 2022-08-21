#include <bits/stdc++.h>
using namespace std;

class Phonebook{
	private:
        int n,number;
        string name;
	    vector<pair<int,string>> saving;

	public:
		void setvalue()
		{
			cout<<"Enter how many Phone number that you would like to save: \n";
			cin >> n;
			for(int i=0;i<n;++i)
            {
                int x; string y;
                cin>> x >> y;
                saving.push_back(make_pair(x,y));
            }
			cout<<"\n";
		}
		void showdata()
		{
		    for(int i=0;i<n;++i)
            {
                cout<<"Phone number: "<<saving[i].first<<" & Name: "<<saving[i].second<<endl;
            }
		}

		void search()
		{
			cout<<"\nEnter the name or number to be searched: ";
			cin>>name>>number;
			for(int i=0;i<n;++i)
            {
                if(name == saving[i].second || number == saving[i].first)
                {
                    cout<<saving[i].first<<" "<<saving[i].second<<endl;
                }
                else{
                    cout<<"Not found!"<<endl;
                }
            }
	    }
	    void remove()
    {
        string rip;
        int del;
        cin >> del;
	    cout << "Enter the name that you would like to delete: ";
	    cin >> rip;
	    for(int i=0;i<saving.size()-1;++i)
        {
            if(del == saving[i].first ||rip == saving[i].second)
            {
                // confused here


            }
            else
            {

            }
        }
    }
};

   int main()
   {
   	           Phonebook b;
   	           int choice;
   	    while(1){
   	    	cout<<"\n______WELCOME____\n";
   	    	cout<<"\n*Enter Your Choice* :";
   	    	cout<<"\n1.Enter Name and  Enter Phone number\n ";
   	    	cout<<"2.Phonebook Enquiry\n";
   	    	cout<<"3.to see the contact list\n";
   	    	cout<<"4.Remove\n";
   	    	cout<<"5. Cancel"<<endl;
   	    	cin>>choice;

		   switch(choice){
		   	case 1:
		   		b.setvalue();
		   		break;
		   	case 2:
		   		b.showdata();
		   		break;
		   	case 3:
			   b.search();
			   break;
		   	case 4:
			   b.remove();
			   break;
			case 5:
			   exit(1);
			   break;
			default:
			cout<<"Invalid Option";
		   }
   }
}
