#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Book
{
    string book_name;
    string author;
    int pages;
    float price;
   
};

vector<Book>library;

void addBook() {
    Book b;
    cout<<"Enter book name:";
    getline(cin>>ws,b.book_name);
    cout<<"Enter author name:";
    getline(cin>>ws,b.author);
    cout<<"Enter number of pages:";
    cin>>b.pages;
    cout<<"Enter price:";
    cin>>b.price;
    library.push_back(b); 
    cout<<"Book added successfully.\n"; 
}

void displayBooks(){
    cout<<"\nLibrary Books\n:";
    for(const auto&b:library){
        cout<<"Name:"<<b.book_name<<",Author:"<<b.author
        <<",Pages:"<<b.pages<<",Price:"<<b.price<<endl;
    }
}

void listBooksByAuthor(){
    string author_name;
    cout<<"Enter author name:";
    getline(cin>>ws,author_name);
    for(const auto&b:library){
        if(b.author==author_name){
        cout<<"Name:"<<b.book_name<<",Pages:"<<b.pages<<"Price:"<<b.price<<endl;
        }
    }
}

void countBooks(){
    cout<<"Total number of books:"<<library.size()<<endl;
}

int main(){
    int choice;
    do{
      cout<<"\nLibrary Managment System\n";
      cout<<"1.Add book information\n";
      cout<<"2.Display book information\n";
      cout<<"3.List all books of given author\n";
      cout<<"4.List the count of books in the library\n";
      cout<<"5.Exit\n";
      cout<<"Enter your choice:";
      cin>>choice;
      switch(choice){
        case 1:addBook();break;
        case 2:displayBooks();break;
        case 3:listBooksByAuthor();break;
        case 4:countBooks();break;
        case 5:cout<<"Exiting...\n";break;
        default:cout<<"Invalid choice.\n";
      }  
    }while(choice!=5);
     return 0;  
}     
      
      
    


    
    


