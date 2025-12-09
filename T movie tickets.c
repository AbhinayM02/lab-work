#include <stdio.h>
int main()
{
	int index,movie_id,tickets,price;
	printf("---MOVIE TICKET BOOKING---\n");
	printf("1. SHOW MOVIES\n");
	printf("2. BOOK TICKETS\n");
	printf("3. QUIT\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&index);
	
	if(index==1)
	    printf("Available Movies:\n");
	    printf("ID      Name            Seats   Price");
	    printf("----------------------------------------\n");
	    printf("1     Litlle Hearts     60      rs.180\n");
	    printf("2     Demon Slayer      100     rs.295\n");
	    printf("3     Mirai             60      rs.295\n");
	    
	printf("\n---MOVIE TICKET BOOKING---\n");
	printf("1. SHOW MOVIES\n");
	printf("2. BOOK TICKETS\n");
	printf("3. QUIT\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&index);
	
	if(index==2)
	   printf("Enter movie ID to book: ");
	   scanf("%d",&movie_id);
	   if(movie_id==1)
	      {
		    printf("Enter number of tickets: ");
	       scanf("%d",&tickets);
	       price=tickets*180;
	       printf("Booking Confirmed!\n");
	       printf("Movie: Little Hearts\n");
	       printf("Tickets: %d\n",tickets);
	       printf("Total: %d\n\n",price);    
	   }
	    else if(movie_id==2)
	    {
		   printf("Enter number of tickets: ");
		   scanf("%d",&tickets);
		   price=tickets*295;
		   printf("Booking Confirmed!\n");
		   printf("Movie: Demon Slayer\n");
		   printf("Tickets: %d\n",tickets);
		   printf("Total: %d\n\n",price); 
	}
		else if(movie_id==3)
		{
		   printf("Enter number of tickets: ");
		   scanf("%d",&tickets);
		   price=tickets*295;
		   printf("Booking Confirmed!\n");
		   printf("Movie: Mirai\n");
		   printf("Tickets: %d\n",tickets);
		   printf("Total: %d\n\n",price);
	}
		else 
		   printf("Invalid");
		   
    return 0;
}
