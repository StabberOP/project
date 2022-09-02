#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

class sll
{
public:
  node * head, *last;

  void input ();

  void length ();
  
  void display();
    sll ()
  {
    head = NULL;
    last = NULL;

  }
};

void
sll::length ()
{
  int len = 0;
  node *temp;

  temp = head;

  while (temp != NULL)
    {
      len++;
      temp = temp->next;
    }
  cout << "length is " << len;

}
void sll::display (){
    
    node *temp=head;
    if(head==NULL)
    {
        cout << "empty ";
    }
    
       while(temp!=NULL)
       {
           cout << "value  "<<temp->data;
           temp=temp->next;
    }

}


void
sll::input ()
{
  int val;
  node *temp;
  cout << "Enter the value ";
  cin >> val;

  temp = new node;


  temp->data = val;
  temp->next = NULL;

  if (head == NULL)
    {
      head = temp;
      last = temp;
    }
  else
    {
      last->next = temp;
      last = temp;
    }
}

int
main ()
{
  int v;
  sll s;
  do{
  cout << "***Details***** ";
  cout << "1.Input ";
  cout << "2.length ";
  cout << "3.display ";
  cout << "4.exit";
  cout << "Enter the value ";
  cin >> v;
  switch (v)
    {
    case 1:
      s.input ();
      break;

    case 2:
      s.length ();
      break;
      
      case 3:
      s.display ();
      break;
    }
 
  
}
while (v != 4);
return 0;
}