#include <iostream>

using namespace std;

int main()
{
    char input = '0';
    int n =0;
    while(1)
    {
    cout<< "Please select the number that matches the program you would like to run \n";
    cout<< "1. 3n+1 \n";
    cout<< "2. Sum from 1 to 100 \n";
    cout<< "3. Sum reciprocals \n";
    cout<< "4. Compute factorial from input \n";
    cout<< "Q. Exit \n";
    cout<<"Please enter a number \n";

  cin>>input;
  n=0;
  switch (input){
  case '1':
      cout<<"\n";
      cout<<"Please enter a number to check \n";
      cin>>n;
      while(!(n==1))
      {
      if (!(n%2))
      {
          n=n/2;
      }
      else
      {
          n=n*3+1;
      }
      cout<<n<<"\n";
      }
      cout<<"Congrats! \n\n";
      break;
  case '2':
cout<<"\n";
 for(int i=1; i<=100;i++)
 {
     n+=i;
 }
 cout<<"Sum of 1-100 =" << n<< "\n";
 n=100*(100+1)/2;
 cout<<"Using Gaussian formula n =" << n << "\nThey match! \n\n";
      break;
  case '3':
  {
      cout<<"\n";
      float f1=0.0;
      float f2=0.0;
      double d1 = 0.0;
      double d2 = 0.0;
      n=1;
      for(f1 = 0.0; n<100; n++)
      {
          f1+=1/float(n);
      }
      cout<<"Float Sum1, increasing n="<<f1<<"\n";
      n=100;
      for(f2 = 0.0; n>0; n--)
      {
          f2+=1/float(n);
      }
      cout<<"Float Sum2, decreasing n="<<f2<<"\n";
      cout<<"Difference between float sums="<<f1-f2<<"\n";
      n=1;
      for(d1 = 0.0; n<100; n++)
      {
          d1+=1/double(n);
      }
      cout<<"Double Sum1, increasing n="<<d1<<"\n";
      n=100;
      for(f2 = 0.0; n>0; n--)
      {
          d2+=1/double(n);
      }
      cout<<"Double Sum2, decreasing n="<<d2<<"\n";
      cout<<"Difference between double sums="<<d1-d2<<"\n\n";
      break;
}
  case '4':
  {
      cout<<"\n";
      int factorial =1;
      cout<<"Please enter a number to check \n";
      cin>>n;
      for(factorial = 1; n>0;n--)
      {
          factorial=factorial*n;
      }
      cout<<"The factorial=" << factorial<< "\n\n";
      break;
  }
  case 'Q':
      return 0;
      break;
  case 'q':
      return 0;
      break;
  default:
      cout<<"Error: input not valid\n";
      break;
  }

}
}
