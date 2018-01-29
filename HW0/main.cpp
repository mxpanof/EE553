#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main()
{
  //initialize varibles
  //input is char for intutive input options
  char input = '0';
  int n =0;
  while(1) //refresh choices after task completion
  {
  cout<< "Please select the number that matches the program you would like to run \n";
  cout<< "1. 3n+1 \n";
  cout<< "2. Sum from 1 to 100 \n";
  cout<< "3. Sum reciprocals \n";
  cout<< "4. Compute factorial from input \n";
  cout<< "5. Mystery Sum\n";
  cout<< "Q. Exit \n";
  cout<<"Please enter a number \n";
  //gather user input
  cin>>input;
  //reads only first input character, disregards rest
  cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
  //reset n after task completion
  n=0;
  //run task approprate to user input
  switch (input){
  case '1': // runs the 3n+1 formula on input, returns steps taken
      cout<<"\n";
      cout<<"Please enter a number to check \n";
      //this prevents bad nonnumeric from freezing the code, should be a function but thats kidna true for the whole program, see also case 4, also doesn't stop overflowed inputs but eh
      if(!(cin>>n))
      {
          cin.clear();
          cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
          n=0;
          cout <<"Exiting due to nonnumeric input, please try again \n\n";
          break;

      }
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
 case '2'://computs sum of 1-100 two ways, returns value
 cout<<"\n";
 for(int i=1; i<=100;i++)
 {
     n+=i;
 }
 cout<<"Sum of 1-100 =" << n<< "\n";
 n=100*(100+1)/2;
 cout<<"Using Gaussian formula n =" << n << "\nThey match! \n\n";
      break;
  case '3': // computes sum reciprocals using two data types, using two methods and finds differences
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
  case '4'://returns factorial of input
  {
      cout<<"\n";
      int factorial =1;
      cout<<"Please enter a number to check \n";
      if(!(cin>>n))
      {
          cin.clear();
          cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
          n=0;
          cout <<"Exiting due to nonnumeric input, please try again \n\n";
          break;

      }
      for(factorial = 1; n>0;n--)
      {
          factorial=factorial*n;
      }
      cout<<"The factorial=" << factorial<< "\n\n";
      break;
  }
  case '5':
  {
      float f1 = 0.0;
      int i = 0;
      for(i = 1; f1<=1.64; i++)
      {
          f1+=1/float(i*i);
      }
      cout << "The value of this sum=" << f1<< "\n";
      cout << "This took " << i << " iterations\n";
      cout << "The square root of the product of the sum and 6="<<sqrt(6*f1) << "\n\n";
      for(i = 1, f1=0; i<=500; i++)
      {
          f1+=1/float(i*i);
      }
      cout << "The value of this 500 interation, forward sum=" << f1<< "\n";
      cout << "The square root of the product of the sum and 6="<<sqrt(6*f1) << "\n\n";
      for(i = 500, f1=0; i>=1; i--)
      {
          f1+=1/float(i*i);
      }
      cout << "The value of this 500 iteration, backwards sum=" << f1<< "\n";
      cout << "The square root of the product of the sum and 6="<<sqrt(6*f1) << "\n";
      cout << "These sums are the same and shouldn't be, but I can't figure out why\n\n";
  }
      break;
      //multiple quit cases for case sensitivity
  case 'Q':
      return 0;
      break;
  case 'q':
      return 0;
      break;
  default:
      cout<<"Error: input not valid\n\n";
      break;
  }

}
}
