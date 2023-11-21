/* Q15.Ask user to choose any one shape from the following.
-circle
-rectangle
-triangle
For each shape ask user to choose between area and circumference/perimeter.
Print result according to users choice. */
#include<stdio.h>
int main()
{
	int r,len,wid,s1,base,s3,height,area,peri;
	float circum;
	int choice,choose;
	puts("\npress \n 1 = circle\n 2 = Rectangle\n 3 = Triangle ");
	puts("\n Enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : puts("\n Enter the radius = ");
		         scanf("%d",&r);
		         puts("\npress \n 1= area\n 2 = circumference \n 3 = perimeter");
		         puts("\nEnter your choose = ");
		         scanf("%d",&choose);
		         
		         switch(choose)
		         {
		         	case 1 : area = 3.14*r*r;
		         	         printf("\nArea = %f",(float)area);
		         	         break;
		         	        
		         	case 2: circum = 3.14*2*r;
		         	        printf("\nCircumference = %f",circum);
		         	        break;
		         	        
		         	case 3 : peri = 3.14*2*r;
		         	         printf("\nPerimeter = %f",(float)peri);
		         	         break;
		         	
		         	default : printf("\nWrong choose");
		         	          break;
				 }
				break;
				 
		case 2 : puts("\n Enter the length and width = ");
		         scanf("%d%d",&len,&wid);
		         puts("\npress \n 1= area\n 2 = circumference \n 3 = perimeter");
		         puts("\nEnter your choose = ");
		         scanf("%d",&choose); 
		         
		          switch(choose)
		         {
		         	case 1 : area = len*wid;
		         	         printf("\nArea = %d",area);
		         	         break;
		         	        
		         	case 2: circum = 2*(len+wid);
		         	        printf("\nCircumference = %d",(int)circum);
		         	        break;
		         	        
		         	case 3 : peri = 2*(len+wid);
		         	         printf("\nPerimeter = %d",peri);
		         	         break;
		         	
		         	default : printf("\nWrong choose");
		         	          break;
				 }
				 break;
				 
		case 3 : puts("\n Enter the side1,base,side3,height = ");
		         scanf("%d%d%d%d",&s1,&base,&s3,&height);
		         puts("\npress \n 1= area\n 2 = circumference \n 3 = perimeter");
		         puts("\nEnter your choose = ");
		         scanf("%d",&choose); 
		         
		          switch(choose)
		         {
		         	case 1 : area = (height*base)/2.0;
		         	         printf("\nArea = %f",(float)area);
		         	         break;
		         	        
		         	case 2: circum = s1+base+s3;
		         	        printf("\nCircumference = %d",(int)circum);
		         	        break;
		         	        
		         	case 3 : peri = s1+base+s3;
		         	         printf("\nPerimeter = %d",peri);
		         	         break;
		         	
		         	default : printf("\nWrong choose");
		         	          break;
				 }
				 break;
				 
		default : printf("\n Wrong choice");
				 
		         
	}
	
	return 0;
}
