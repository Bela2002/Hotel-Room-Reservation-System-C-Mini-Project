#include<stdio.h>
void main()
{
	int press,room_members,press_a,i,c=0;
	int room_no[5]={1,2,3,4,5};
	char name[5][100];
	
	printf("__________HARITHA VILLA__________");
	printf("\n\n\n______HOTEL BOOKING SYSTEM______");
	printf("\n\n****************************************************");
		
    do
    {
	    do
	    {
	    	printf("\n\n\nPress 1= Check in | 2= Check out | 3= Display | 4= Exit : ");
		    scanf("%d",&press);
		    
		    if(press<=0 || press>4)
		    {
		    	printf("\n Invalid Code.Try Again! \n");
			}
		}
		while(press<=0 || press>4);
			
		if(press==1)
		{
            for(i=0; i<=4; i++)
            {
                do
		        {   
				    printf("\n\n\nAVAILABLE ROOMS  \n 1 2 3 4 5 \n");
					printf("\n\nSelect a room number: ");
					scanf("%d",&room_no[i]);
						    
                  
	                if(room_no[i]<=0 || room_no[i]>5)
					{
						printf("\n Invalid room number.Try again! \n");
					}
                    
			    }
		     	while(room_no[i]<=0 || room_no[i]>5);
		     	
		     	break;
			}

			if(room_no[i-1]==room_no[i])
			{
				printf("\n This room is already booked. \n");
			}
            else
            {
            	printf("Enter the name: ");
		     	scanf(" %[^\n]",&name);
			}
				
			do
			{
				printf("Enter the number of members: ");
				scanf("%d",&room_members);	
					        
				if(room_members<=0 || room_members>4)
				{
					printf("\n  Maximum number is 4 \n");
				}			
			}
			while(room_members<=0 || room_members>4);
				
		   	printf("\n\nBooking Successful! \n   Room no %d is reserved for %s",room_no[i],name); 	         		
		}
		else if(press==2)
		{   for(i=0; i<=4; i++)
		    {
		    	if(room_no[i]>=1 && room_no[i]<=5)
		    	{
		    		c++;
				}
				else
				{
					printf("\n Invalid room number.Try again! \n");
				}
				
				if(c==0)
				{
				    printf("\n\nAll Rooms Are Empty!!!");
					break;	
				}
				else if(c>0 && c<=5)
				{
					printf("\n\nBooked Rooms : ",c);
					break;
				}
			}
			
		}
		else if(press==3)
		{
			printf("\n\nRoom Numbers  :   01     02     03     04     05 ");
			printf("\nCurrent Status:  Free   Free   Free   Free   Free");
			printf("\nMembers       :   00     00     00     00     00");
		}

	}
	while(1>0);
	
	getch();
}
