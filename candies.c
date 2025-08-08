#include<stdio.h>
int main()
{
	int total_number_of_candies, complete_rounds, candies_left, total_candies_for_1_round=15, rounds, total_students, candies_need_per_round;
	
	printf("Enter total number of students");
	scanf("%d",&total_students);
	
	printf("Enter the total number of candies");
	scanf("%d",&total_number_of_candies);
	
	candies_need_per_round= total_students * total_students+1/2;
	rounds= total_number_of_candies/15;
	candies_left= total_number_of_candies % 15;
	printf("Total round happend= %d\n",rounds);
	printf("Total candies left= %d\n",candies_left);
	
	
	return 0;
}