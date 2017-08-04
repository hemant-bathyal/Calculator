#include<iostream.h>
#include<conio.h>
#include<math.h>

void arithmetical();                 //PROTOTYPE

void trignometric();                 //PROTOTYPE

void logarithmic();                  //PROTOTYPE

void exponential();                  //PROTOTYPE

void power();                        //PROTOTYPE

void integer();                      //PROTOTYPE

void other();                        //PROTOTYPE

void reverse();                      //PROTOTYPE

void palindrome();                   //PROTOTYPE

void armstrong();                    //PROTOTYPE

void fibonacci();                    //PROTOTYPE
void main()
{
 int choice;
 char wish;
 do
 {
  clrscr();        //TO CLEAR THE SCREEN
  cout<<"\t\t\t\t***CALCULATOR***";
  cout<<"\n\n\n\tCALCULATOR MENU";
  cout<<"\n\n\t\t1- ARITHMETICAL CALCULATIONS";
  cout<<"\n\t\t2- TRIGNOMETRIC FUNCTIONS";
  cout<<"\n\t\t3- LOGRARITHMIC FUNCTIONS";
  cout<<"\n\t\t4- EXPONENTIAL CALCULATIONS";
  cout<<"\n\t\t5- POWER FUNCTIONS";
  cout<<"\n\t\t6- INTEGER FUNCTIONS";
  cout<<"\n\t\t7- OTHER FUNCTIONS";
  cout<<"\n\n\n\tENTER YOUR CHOICE: ";
  cin>>choice;
  switch(choice)
  {
   case 1: arithmetical();         //CALLING
	   break;

   case 2: trignometric();         //CALLING
	   break;

   case 3: logarithmic();        //CALLING
	   break;

   case 4: exponential();          //CALLING
	   break;

   case 5: power();                //CALLING
	   break;

   case 6: integer();              //CALLING
	   break;

   case 7: other();                //CALLING
	   break;

   default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
  }
  getch();
  cout<<"\n\n\n\tDO YOU WISH TO CONTINUE?(Y/N) ";
  cin>>wish;
 }while((wish=='y')||(wish=='Y'));
 getch();
}


void arithmetical()                       //DEFINITION
{
 int choice;
 long double a,b;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***ARITHMETICAL-CALCULATIONS***";
 cout<<"\n\n\n\tMENU";
 cout<<"\n\n\t\t1- ADDITION";
 cout<<"\n\t\t2- SUBTRACTION";
 cout<<"\n\t\t3- MULTIPLICATION";
 cout<<"\n\t\t4- DIVISION";
 cout<<"\n\t\t5- REMAINDER(MODULUS)";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t\t***ADDITION***";
	  cout<<"\n\n\n\tFIRST NUMBER: ";
	  cin>>a;
	  cout<<"\n\n\tSECOND NUMBER: ";
	  cin>>b;
	  cout<<"\n\n\tSUM: "<<a+b;
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t\t***SUBTRACTION***";
	  cout<<"\n\n\n\tFIRST NUMBER: ";
	  cin>>a;
	  cout<<"\n\n\tSECOND NUMBER: ";
	  cin>>b;
	  cout<<"\n\n\tDIFFERENCE: "<<a-b;
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t\t***MULTIPLICATION***";
	  cout<<"\n\n\n\tFIRST NUMBER: ";
	  cin>>a;
	  cout<<"\n\n\tSECOND NUMBER: ";
	  cin>>b;
	  cout<<"\n\n\tPRODUCT: "<<a*b;
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t\t***DIVISION***";
	  cout<<"\n\n\n\tFIRST NUMBER: ";
	  cin>>a;
	  cout<<"\n\n\tSECOND NUMBER: ";
	  cin>>b;
	  if(b!=0)
	    {
	     cout<<"\n\n\tQUOTIENT WHEN THE FIRST NUMBER IS DIVIDED BY THE SECOND NUMBER: "<<a/b;
	    }
	  else
	     {
	      cout<<"\n\n\tDIVISION BY ZERO IS NOT POSSIBLE!";
	     }
	  break;

  case 5: clrscr();
	  long x,y;
	  cout<<"\t\t\t\t***REMAINDER(MODULUS)***";
	  cout<<"\n\n\n\tFIRST NUMBER: ";
	  cin>>x;
	  cout<<"\n\n\tSECOND NUMBER: ";
	  cin>>y;
	  cout<<"\n\n\tREMAINDER WHEN THE FIRST NUMBER IS DIVIDED BY THE SECOND NUMBER: "<<x%y;
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void trignometric()                       //DEFINITION
{
 int choice;
 long double a;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***TRIGNOMETRIC-CALCULATIONS***";
 cout<<"\n\n\n\tMENU";
 cout<<"\n\n\t\t1- SINE";
 cout<<"\n\t\t2- COSINE";
 cout<<"\n\t\t3- TANGENT";
 cout<<"\n\t\t4- COSECANT";
 cout<<"\n\t\t5- SECANT";
 cout<<"\n\t\t6- COTANGENT";
 cout<<"\n\t\t7- SINE INVERSE";
 cout<<"\n\t\t8- COSINE INVERSE";
 cout<<"\n\t\t9- TANGENT INVERSE";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t\t***SINE FUNCTION***";
	  cout<<"\n\n\n\tANGLE IN RADIANS: ";
	  cin>>a;
	  cout<<"\n\n\tSINE OF THE GIVEN ANGLE: "<<sin(a);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t\t***COSINE FUNCTION***";
	  cout<<"\n\n\n\tANGLE IN RADIANS: ";
	  cin>>a;
	  cout<<"\n\n\tCOSINE OF THE GIVEN ANGLE: "<<cos(a);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t\t***TANGENT FUNCTION***";
	  cout<<"\n\n\n\tANGLE IN RADIANS: ";
	  cin>>a;
	  cout<<"\n\n\tTANGENT OF THE GIVEN ANGLE: "<<tan(a);
	  break;

  case 4: clrscr();
	  cout<<"\t\t\t\t***COSECANT FUNCTION***";
	  cout<<"\n\n\n\tANGLE IN RADIANS: ";
	  cin>>a;
	  cout<<"\n\n\tCOSECANT OF THE GIVEN ANGLE: "<<(1/sin(a));
	  break;

  case 5: clrscr();
	  cout<<"\t\t\t\t***SECANT FUNCTION***";
	  cout<<"\n\n\n\tANGLE IN RADIANS: ";
	  cin>>a;
	  cout<<"\n\n\tSECANT OF THE GIVEN ANGLE: "<<(1/cos(a));
	  break;

  case 6: clrscr();
	  cout<<"\t\t\t\t***COTANGENT FUNCTION***";
	  cout<<"\n\n\n\tANGLE IN RADIANS: ";
	  cin>>a;
	  cout<<"\n\n\tCOTANGENT OF THE GIVEN ANGLE: "<<(1/tan(a));
	  break;

  case 7: clrscr();
	  cout<<"\t\t\t\t***SINE INVERSE FUNCTION***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tSINE INVERSE OF THE GIVEN VALUE: "<<asin(a);
	  break;

  case 8: clrscr();
	  cout<<"\t\t\t\t***COSINE INVERSE FUNCTION***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tCOSINE INVERSE OF THE GIVEN VALUE: "<<acos(a);
	  break;

  case 9: clrscr();
	  cout<<"\t\t\t\t***TANGENT INVERSE FUNCTION***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tTANGENT INVERSE OF THE GIVEN VALUE: "<<atan(a);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void logarithmic()                        //DEFINITION
{
 int choice;
 long double a;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***LOGARITHMIC-CALCULATIONS***";
 cout<<"\n\n\n\tMENU";
 cout<<"\n\n\t\t1- LOG BASE 'e'";
 cout<<"\n\t\t2- LOG BASE 10";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t\t***LOG BASE 'e'***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tCORRESPONDING LOGARITHMIC VALUE: "<<log(a);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t\t***LOG BASE 10***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tCORRESPONDING LOGARITHMIC VALUE: "<<log10(a);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void exponential()                        //DEFINITION
{
 long double a;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***EXPONENTIAL-FUNCTION***";
 cout<<"\n\n\n\tVALUE: ";
 cin>>a;
 cout<<"\n\n\t'e' RAISED TO THE POWER "<<a<<" : "<<exp(a);
}

void power()                              //DEFINITION
{
 int choice;
 long double x,a;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***EXPONENTS-CALCULATIONS***";
 cout<<"\n\n\n\tMENU";
 cout<<"\n\n\t\t1- EXPONENTS AND POWERS";
 cout<<"\n\t\t2- SQUARE ROOT";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t\t***EXPONENT AND POWERS***";
	  cout<<"\n\n\n\tVALUE OF THE BASE: ";
	  cin>>a;
	  cout<<"\n\n\tVALUE OF THE EXPONENT: ";
	  cin>>x;
	  cout<<"\n\n\t"<<a<<" RAISED TO THE POWER "<<x<<" : "<<pow(a,x);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t\t***SQUARE ROOT***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tSQUARE ROOT OF "<<a<<" : "<<sqrt(a);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void integer()                            //DEFINITION
{
 int choice;
 long double x,a;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***INTEGER-FUNCTIONS***";
 cout<<"\n\n\n\tMENU";
 cout<<"\n\n\t\t1- ABSOLUTE VALUE FUNCTION";
 cout<<"\n\t\t2- GREATEST INTEGER FUNCTION";
 cout<<"\n\t\t3- SMALLEST INTEGER FUNCTION";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: clrscr();
	  cout<<"\t\t\t\t***ABSOLUTE VALUE FUNCTION***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tABSOLUTE VALUE, |VALUE|, |"<<a<<"| : "<<fabs(a);
	  break;

  case 2: clrscr();
	  cout<<"\t\t\t\t***GREATEST INTEGER FUNCTION***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tGIF VALUE, [VALUE], ["<<a<<"] : "<<floor(a);
	  break;

  case 3: clrscr();
	  cout<<"\t\t\t\t***SMALLEST INTEGER FUNCTION***";
	  cout<<"\n\n\n\tVALUE: ";
	  cin>>a;
	  cout<<"\n\n\tSIF VALUE, |_VALUE_|, |_"<<a<<"_| : "<<ceil(a);
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void other()                              //DEFINITION
{
 int choice;
 clrscr();        //TO CLEAR THE SCREEN
 cout<<"\t\t\t\t***OTHER-FUNCTIONS***";
 cout<<"\n\n\n\tMENU";
 cout<<"\n\n\t\t1- TO REVERSE A NUMBER";
 cout<<"\n\t\t2- TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT";
 cout<<"\n\t\t3- TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT";
 cout<<"\n\t\t4- FIBONACCI SERIES";
 cout<<"\n\n\n\tENTER YOUR CHOICE: ";
 cin>>choice;
 switch(choice)
 {
  case 1: reverse();            //CALLING
	  break;

  case 2: armstrong();          //CALLING
	  break;

  case 3: palindrome();         //CALLING
	  break;

  case 4: fibonacci();          //CALLING
	  break;

  default: cout<<"\n\n\tWRONG CHOICE! PLEASE ENTER A VALID CHOICE.";
 }
}

void reverse()                      //DEFINITION
{
 clrscr();
 int num,rev=0,rem;
 cout<<"\t\t\tPROGRAM TO REVERSE A NUMBER";
 cout<<"\n\n\n\tNUMBER: ";
 cin>>num;
 while(num>0)
 {
  rem=num%10;
  rev=(rev*10)+rem;
  num=num/10;
 }
 cout<<"\n\n\tREVERSE NUMBER: "<<rev;
}

void palindrome()             //DEFINITION
{
 clrscr();
 int num,rev=0,rem,m;
 cout<<"\t\tPROGRAM TO FIND WHETHER A NUMBER IS PALINDROME OR NOT";
 cout<<"\n\n\n\tNUMBER: ";
 cin>>num;
 m=num;
 while(num>0)
 {
  rem=num%10;
  rev=(rev*10)+rem;
  num=num/10;
 }
 cout<<"\n\n\tREVERSE NUMBER: "<<rev;
 if(m==rev)
   {
    cout<<"\n\n\tTHE GIVEN NUMBER IS A PALINDROME!";
   }
 else
    {
     cout<<"\n\n\tTHE GIVEN NUMBER IS NOT A PALINDROME!";
    }
}

void armstrong()
{
 clrscr();
 int num,digit,sum=0,m;
 cout<<"\t\tPROGRAM TO FIND WHETHER A NUMBER IS ARMSTRONG OR NOT";
 cout<<"\n\n\n\tNUMBER: ";
 cin>>num;
 m=num;
 while(num>0)
 {
  digit=num%10;
  sum=sum+pow(digit,3);
  num=num/10;
 }
 cout<<"\n\n\tSUM OF CUBE OF DIGITS: "<<sum;
 if(sum==m)
   {
    cout<<"\n\n\tTHE GIVEN NUMBER IS ARMSTRONG!";
   }
 else
    {
     cout<<"\n\n\tTHE GIVEN NUMBER IS NOT ARMSTRONG!";
    }
}

void fibonacci()
{
 clrscr();
 int first=0,second=1,third,n;
 cout<<"\t\t\tFIBONACCI SERIES";
 cout<<"\n\n\n\tNUMBER OF TERMS: ";
 cin>>n;
 cout<<"\n\n\tFIBONACCI SERIES....\n\n";
 cout<<first<<" "<<second;
 for(int i=3;i<=n;i++)
    {
     third=first+second;
     cout<<" "<<third;
     first=second;
     second=third;
    }
}