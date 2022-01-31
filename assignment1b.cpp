 //assignment sheet 2 
 
 #include <iostream>
using namespace std;
int main()
{
    int i;
    double purcahse,discount = 0,sales_tax = 0;
    cout << "Enter 1 for the musical teacher and 2 for non teacher\n"<<endl;
    cin>>i;
    cout << "Enter amount\n"<<endl;
    cin >> purcahse;
    switch(i)
    {
        case 1:
        {
           cout <<"\t**Teachers discount**";
           if (purcahse <= 100)
           {
              cout <<"\nTotal purchases\t\t\t\t:$"<<purcahse;
              discount = (purcahse * 10)/100;                                      
              sales_tax = (5 * (purcahse - discount)) / 100;                      
              cout <<"\nTeacher's discount (10%)\t\t:"<<discount;
              cout<<"\ndiscounted amount \t\t\t:"<<(purcahse-discount);
              cout<<"\nSales tax(5%)\t	:"<<(sales_tax);
              cout << "\n\nTotal\t:$" <<sales_tax+(purcahse - discount);
           }
           else if (purcahse > 100)
           {
              discount = (purcahse * 12)/100;                
              sales_tax = (5 * (purcahse - discount)) / 100;
              cout <<"\nTotal purchases\t	:=> $"<<purcahse;
              cout <<"\n\nTeacher's discount (12%)\t\t:"<<discount;
              cout<<"\n\ndiscounted amount\t\t\t:"<<(purcahse-discount);
              cout<<"\n\nSales tax(5%)\t\t\t\t:"<<(sales_tax);
              cout << "\n\nTotal\t\t\t\t\t:$" <<sales_tax+(purcahse - discount);
           }
           break;
        }
        case 2:
        {
           {
              sales_tax = (5 * (purcahse - discount)) / 100;     
              cout <<"Total purchases\t\t t:$"<<purcahse;
              cout<<"\n\nSales tax(5%)\t :"<<sales_tax;
              cout << "\n\nTotal\t	:$" <<sales_tax+purcahse;
           }
        }
    }
}
