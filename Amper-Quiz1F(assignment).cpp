#include <iostream>  // UNSAY SULOD ANI?
#include <string> 

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 // global
 
 int temp; // global temp
 int b; // global b variable
 

class cpe1b{
	public:
		void palindromic_prime(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA PALINDROMIC PRIME
		void wasteful_number(long x); // function for wasteful number
		long prime(long num);  // KANI CLASS GAHIMOG FUNCTION NGA GINGANLAN UG PRIME NGA longEGER KAY longEGER MAN ANG PRIME DILI STRING DILI POD FLOAT
		long binary(long num1); // function for binary
		long reverse(long num2); // function for reverse
		long digit(long num3); // function for digit
		long primefactorization(long num4);  // function for prime factorization

		long j,count,x; // 1
		long pdtemp, bin, base, rem; // 2
		long rev, temp, key; // 3
		long dolor, digits; // 4
		long factors,t,i; // 5
		long rem1[100]; // a
		long johanna; // 6
		
		
		
		// 1 to 6 are variable or vessel 
		// a is array and its only applicable to 100 input number/string
};

int main() {
	
	cpe1b guwapo; // class
	long num;	// num variable
    string str; // character input
    
	cin>>str; // input string
    cout << "The size of str is " << str.length() << " bytes.\n"; // printing of how many string length of the input string
    temp = str.length(); // holding the number of strlen/back up 
	
	

	// EXAM
	
	if (str.length()%2!=0){  	// if the strlen is odd
		
		for(b=1; b<=temp; b++) 	// loop for palindromic prime
		{
		guwapo.palindromic_prime(b);  	// Palindromic prime process
		cout<<endl;
		}
	}
	
	else{
		for(b=1; b<=temp; b++)  // if the strlen is even
		{
		
		guwapo.wasteful_number(b);  // loop for wasteful number
		cout<<"\n"<<endl;
		}
	}
	
		
	
	
	
	
	
	
	return 0;
}

void cpe1b::palindromic_prime(long x){ // process of palindromic prime
	cout<<"PALINDROMIC PRIME BA NI SIYA?"<<endl; // determine if this is a palindromic
	prime(x);
}

void cpe1b::wasteful_number(long x) // process of wasteful number that determine if its wasteful or not
   {
	cout<<"WASTEFUL NUMBER NI SIYA"<<endl;	 // printing output that this is wasteful number



	digit(x); // function digit and it was inserted by an x
	
	if (digits<factors){ // if digit is less than to factor
		
		cout<<"\nWasteful number:  "<<x; // printing the number of factors of the given number
	}
}


long cpe1b::prime(long num){  // process of prime number
	/* PRIME */

	count = 0;
	for (j=2;j<num;j++){ // looping until it satisfied or it reach to the end of loop
		if (num%j==0){ // if it equal to zero
			count++; // if the statement is true, count variable will be add or plus one every succeeded statement
		}
	}
	
	if (count==0){ // if count is zero 
	cout<<"PRIME"<<endl; // telling that this is a prime number
	binary(num); // going to process of binary
	}
	
	else{cout<<"Composite"<<endl; // telling that this is an composite number
		cout<<"DIKO WELCOME :("<<endl; // sad emoji :(
	}
}

long cpe1b::binary(long num1){  // process of binary
	/* BINARY */

	/*	prlongf("PRIME: %ld \n",pdnum[i]);     */
	pdtemp = num1; // backing number of num1 variable
	bin=0; // bin is declared by 0
	base = 1; // base is declared by 1

	for (;pdtemp>0;){ // looping process of binary
		rem=pdtemp%2;
		bin=bin+rem*base;
		base = base*10;
		pdtemp=pdtemp/2;
	}

	cout<<"BINARY: "<<bin<<endl; // printing of binary 
	reverse(bin); // going to reverse process
}

long cpe1b::reverse(long num2) // process of reverse number
{
	/*REVERSE*/

	key=num2; // back up for num 2 to key variable
	temp=0; // temp is declared by 0
	rev=0; // rev is declared by 0

	for (;key!=0;){ // looping process of reverse
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}

	cout<<"REVERSE: "; 
	cout<<rev<<endl; // showing done process of reverse number
	
	if (rev==num2) // if the variable rev and num2 is equal or same
	{
		cout<<"PALINDROMIC PRIME KO YEHEY"<<endl; // if the statement is true this will be the output
	}

	else{ // if the variable rev and num2 is not equal
		cout<<"DIKO WELCOME :("<<endl; // if the statement is true this will be the output
	}
}

long cpe1b::digit(long num3){ // digit process of wasteful number

	dolor=num3; // back up for num3 to dolor
	johanna=num3; // back up for num3 to johanna
	digits = 0; // digit is declared by 0

	for (;dolor!=0;) // looping process, if dolor variable is not equal to zero
	{ 
		dolor=dolor/10; // dolor variable will be divided by 10
		digits++; // every succeeded statement of loop, digit will be add 1 or plus 1 
		}
		
		cout<<digits; // showing the output of digit
		
		
		primefactorization(johanna); // going to primefactorization process
		
}

long cpe1b::primefactorization(long num4) // primefactorization process
{
	
	x=num4; // back up for num4 to x variable
	factors=0; // factor is declared by 0
	i=2; // i variable is declared by 2
	t=0; // t variable is declared by 0
	
	for (;x!=0;) // looping process, if x variable is not equal to zero
	{
	   if (x%i==0) // if x variable is equal to zero
	   {
	       x=x/i; // x variable will be divided by i variable
	       rem1[t]=i; // back up for i variable to array rem1
	       t++; // every succeeded of if statement t will be add 1 or plus 1 
	       factors++; // every succeeded of if statement factor variable will be add 1 or plus 1 
	       
	       if (x==1) // if x variable is equal to 1
		   {
	              break; // if the statement is true, it will turn back to for loop
	              }
	           }
	       else // if x variable is not equal to 1
		   {
	           i++; // if the statement is true, i will be plus 1 or add 1
	           }
	    }
	
	for (i=0;i<factors;i++){ // loop process for array rem1
		printf(" %ld ",rem1[i]); // output of rem1
	}
	
	cout<<"factors:="<<factors; // showing how many can be factor of the given number
}
