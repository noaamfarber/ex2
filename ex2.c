/******************
Name:Noaam Farber
ID:218882645
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
    int exit=1;
    while(exit)
    {
    int exp;
	printf("Choose an option:\n"
"	1. Happy Face\n"
"	2. Balanced Number\n"
"	3. Generous Number\n"
"	4. Circle Of Joy\n"
"	5. Happy Numbers\n"
"	6. Festival Of Laughter\n"
"	7. Exit\n");
    scanf(" %d",&exp);
    switch (exp) {
        case 1:
        int sze;
        char eye,nose,mouth;
        printf("Enter symbols for the eyes, nose, and mouth:\n");
        scanf(" %c %c %c",&eye, &nose, &mouth);
        printf("Enter face size:\n");
        scanf(" %d", &sze);
        while(sze<0||sze%2==0)
        {printf("The face's size must be an odd and positive number, please try again:\n");
                    scanf(" %d", &sze);
        }
        
        printf("%c",eye);        
        for(int i =0;i<sze;i++)
        {
            printf(" ");
        }
        printf("%c\n",eye);
            for(int i =0;i<=(sze/2);i++)
        {
            printf(" ");
        }
        printf("%c\n",nose);
        printf("\\");
        for(int i =0;i<sze;i++)
        {
            printf("%c",mouth);
        }
        printf("/\n");

        
       
        


            break;
        case 2:
        int x,y,z,rsum,lsum;
        rsum=0;
        lsum=0;
        printf("Enter a number:\n");
        scanf(" %d",&x);
        while(x<0)
       {
            printf("Only positive number is allowed, please try again:\n");
            scanf(" %d",&x);
        }
        z=x;
        y=0;
        while(z!=0)
        {
            z=z/10;
            y++;
        }
        if(y%2==1)
        {
            for(int i=0;i<((y-1)/2);i++)
            {
                rsum+=x%10;
                x=x/10;
            }
            x=x/10;
            for(int i=0;i<((y-1)/2);i++)
            {
                lsum+=x%10;
                x=x/10;
            }

            
        }
        else
        {
            for(int i=0;i<(y/2);i++)
            {
                rsum+=x%10;
                x=x/10;
            }
            for(int i=0;i<(y/2);i++)
            {
                lsum+=x%10;
                x=x/10;
            }

        }
        if(rsum==lsum)
        {
            printf("This number is balanced and brings harmony!\n");
        }
        else
        {
            printf("This number isn't balanced and destroys harmony.\n");
        }
        
        
        
            break;
        case 3:
        int b,a;
        a=0;
        printf("Enter a number:\n");
        scanf(" %d",&b);
        while(b<0)
       {
            printf("Only positive number is allowed, please try again:\n");
            scanf(" %d",&b);
        }
        for(int i =1;i<=(b/2);i++)
        {
            if(b%i==0)
            {
                a+=i;
            }
        }
        if(b<a)
        {
            printf("This number is generous!\n");
        }
        else
        {
            printf("This number does not share.\n");
        }
        
        

        
            break;
        case 4:
        int r,q,m;
        q=0;
        m=r;
        printf("Enter a number:\n");
        scanf(" %d",&r);
        while(r<=0)
        {
            printf("Only positive number is allowed, please try again:\n");
            scanf("%d",&r);
        }
        if(r==1)
        {
            printf("The circle remains incomplete.\n");
            break;
        }
        while (m > 0)
        {
            q=q*10;
            q=q+(m % 10);
            m=m/10;        
        }
         m=1;
    
    for(int i=2;i<r;i++)
    {
        if(r%i==0)
        {
         printf("The circle remains incomplete.\n");
         m=0; 
        break;
        }
    }
    if(m)
    {
    for(int i=2;i<q;i++)
    {
        if(q%i==0)
        {
         printf("The circle remains incomplete.\n");
         break; 
         m=0;
        }
    }
    }
             if(m)
             {
                 printf("This number completes the circle of joy!\n");
                 
             }

    

        

        
        
            break;
        case 5:
    int n,u,f;

    printf("Enter a number:\n");
    scanf(" %d",&n);

    while(n<=0) 
    {
        printf("Only positive numbers are allowed, please try again:\n");
        scanf(" %d",&n);
    }

    if(n==1) 
    {
        printf("Between 1 and 1 only these numbers bring happiness: 1\n");
        return 0;
    }

    printf("Between 1 and %d only these numbers bring happiness: 1",n);
    for(int i=2;i<=n;i++) 
    {
        u=i;
        f=i;

        do 
        {
            int sum=0;
            while(u>0) 
            {
                sum+=(u%10)*(u%10);
                u=u/10;
            }
            u=sum;

            sum=0;
            int t=f;
            while(t>0) 
            {
                sum+=(t%10)*(t%10);
                t=t/10;
            }
            f=sum;

            sum=0;
            t=f;
            while(t>0) 
            {
                sum+=(t%10)*(t%10);
                t=t/10;
            }
            f=sum;

            if(f==1) 
            {
                printf(" %d",i);
                break;
            }
        } while(u!=f);
    }

    printf("\n");


       
        
            break;
        case 6:
    int sml, chr, max;
    while(1)
    {
        printf("Enter a smile and cheer number:\n");
        if(scanf("smile: %d, cheer: %d",&sml,&chr)!= 2||sml<=0||chr<= 0||sml==chr)
        {
            printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
            while(getchar() != '\n');
        }
        else
        {
            while(getchar() != '\n');
            break;
        }
    }

    while(1)
    {
        printf("Enter maximum number for the festival:\n");
        if(scanf("%d", &max) != 1 || max <= 0)
        {
            printf("Only positive maximum number is allowed, please try again:\n");
            while(getchar() != '\n');
        }
        else
        {
            break;
        }
    }

    for(int i = 1; i <= max; i++)
    {
        if(i % chr == 0 && i % sml == 0)
        {
            printf("Festival!\n");
        }
        else if(i % chr == 0)
        {
            printf("Cheer!\n");
        }
        else if(i % sml == 0)
        {
            printf("Smile!\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
            break;
        case 7:
        printf("Thank you for your journey through Numeria!");
        exit=0;
            break;
        default:
            printf("This option is not available, please try again.\n");
            break;
    }
    }
	// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
	/* Example:
	* n = 3:
	* 0   0
	*   o
	* \___/
	*/
    

	// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
	// and the sum of all digits to the right of the middle digit(s) are equal
	/* Examples:
	Balanced: 1533, 450810, 99
	Not blanced: 1552, 34
	Please notice: the number has to be bigger than 0.
	*/

	// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
	/* Examples:
	Abudant: 12, 20, 24
	Not Abudant: 3, 7, 10
	Please notice: the number has to be bigger than 0.
	*/

	// Case 4: determine wether a number is a prime.
	/* Examples:
	This one brings joy: 3, 5, 11
	This one does not bring joy: 15, 8, 99
	Please notice: the number has to be bigger than 0.
	*/
    

	// Happy numbers: Print all the happy numbers between 1 to the given number.
	// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
	/* Examples:
	Happy :) : 7, 10
	Not Happy :( : 5, 9
	Please notice: the number has to be bigger than 0.
	*/

	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	return 0;
}

